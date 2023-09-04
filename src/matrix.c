#include "matrix.h"
#include "stdio.h"
#include "stdlib.h"

struct Matrix* newMatrix(int rows, int cols) {
  
  //cannot have matrix with 0 or negative rows/collumns 
  if (rows <= 0){
    return NULL;
  } 
  if (cols <= 0){
    return NULL;
  }

  struct Matrix* new_matrix = (struct Matrix*) malloc(sizeof(struct Matrix));
  new_matrix->rows = rows;
  new_matrix->cols = cols;
  new_matrix->data = (float *) malloc(rows * cols * sizeof(float));

  return new_matrix;

}
