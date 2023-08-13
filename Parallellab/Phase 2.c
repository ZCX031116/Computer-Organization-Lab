#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

#include "utils.h"


void parallel_to_grayscale(long img[DIM_ROW][DIM_COL][DIM_RGB], long ***grayscale_img, long *min_max_gray) {
    
    int row, col;
    long min_gray = 256;
    long max_gray = -1;
    int BLOCK_SIZE=70;

    #pragma omp parallel for private(col) reduction(min: min_gray) reduction(max: max_gray)
    for (int row_block = 0; row_block < DIM_ROW; row_block += BLOCK_SIZE)
    {
        for (int col_block = 0; col_block < DIM_COL; col_block += BLOCK_SIZE)
        {
            for (row = row_block; row < row_block + BLOCK_SIZE && row < DIM_ROW; row++)
            {
                for (col = col_block; col < col_block + BLOCK_SIZE && col < DIM_COL; col++)
                {
                    long gray_val = (img[row][col][0] + img[row][col][1] + img[row][col][2]) / 3;
                    grayscale_img[row][col][0] = gray_val;
                    grayscale_img[row][col][1] = gray_val;
                    grayscale_img[row][col][2] = gray_val;
                    min_gray = (gray_val < min_gray) ? gray_val : min_gray;
                    max_gray = (gray_val > max_gray) ? gray_val : max_gray;
                }
            }
        }
    }
    min_max_gray[0] = min_gray;
    min_max_gray[1] = max_gray;
}
