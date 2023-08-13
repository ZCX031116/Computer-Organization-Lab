#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

#include "utils.h"

//This code is NOT buggy, just sequential. Speed it up.
void parallel_convolution(long img[DIM_ROW+PAD][DIM_COL+PAD][DIM_RGB], long kernel[DIM_KERNEL][DIM_KERNEL], long ***convolved_img)
{
    int row, col, pixel, kernel_row, kernel_col;
       int block_row,block_col;
       int BLOCK_SIZE=70;
       #pragma omp parallel for private(row,block_col,col,pixel,kernel_col,kernel_row)
       for (block_row = 0; block_row < DIM_ROW; block_row += BLOCK_SIZE)
       {
           for (block_col = 0; block_col < DIM_COL; block_col += BLOCK_SIZE)
           {
               for (row = block_row; row < block_row + BLOCK_SIZE && row < DIM_ROW; ++row)
               {
                   for (col = block_col; col < block_col + BLOCK_SIZE && col < DIM_COL; ++col)
                   {
             long tmp1=0,tmp2=0,tmp3=0,x;
                       for (kernel_row = 0; kernel_row < DIM_KERNEL; kernel_row++)
                       {
                           for (kernel_col = 0; kernel_col < DIM_KERNEL; kernel_col++)
                           {
                 x=kernel[kernel_row][kernel_col];
                             tmp1+= img[row+kernel_row][col+kernel_col][0] * x;
                             tmp2+= img[row+kernel_row][col+kernel_col][1] * x;
                             tmp3+= img[row+kernel_row][col+kernel_col][2] * x;
                           }
                       }
                       convolved_img[row][col][0] = (convolved_img[row][col][0]+tmp1)/ GBLUR_NORM;
                       convolved_img[row][col][1] = (convolved_img[row][col][1]+tmp2)/ GBLUR_NORM;
               convolved_img[row][col][2] = (convolved_img[row][col][2]+tmp3)/ GBLUR_NORM;
                   }
               }
           }
       }
}


