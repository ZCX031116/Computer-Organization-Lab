#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

#include "utils.h"

//This code is buggy! Find the bug and speed it up.
void parallel_avg_pixel(long img[DIM_ROW][DIM_COL][DIM_RGB], long *avgs) {
    int row, col, pixel;
    long count = DIM_ROW * DIM_COL;
    long sum0,sum1,sum2;
    sum0 = sum1 = sum2 = 0;

    int BLOCK_SIZE=70;

    #pragma omp parallel for reduction(+:sum0,sum1,sum2) private(col)
    for (int row_block = 0; row_block < DIM_ROW; row_block += BLOCK_SIZE)
    {
        for (int col_block = 0; col_block < DIM_COL; col_block += BLOCK_SIZE)
        {
            for (row = row_block; row < row_block + BLOCK_SIZE; row++)
            {
                if (row >= DIM_ROW) break;
                
                for (col = col_block; col < col_block + BLOCK_SIZE; col++)
                {
                    if (col >= DIM_COL) break;
                    
                    sum0 += img[row][col][0];
                    sum1 += img[row][col][1];
                    sum2 += img[row][col][2];
                }
            }
        }
    }
    avgs[0] = sum0 / count;
    avgs[1] = sum1 / count;
    avgs[2] = sum2 / count;
}
