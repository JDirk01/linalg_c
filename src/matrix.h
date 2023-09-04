#ifndef MATRIX_H
#define MATRIX_H

struct Matrix {
  int rows;
  int cols;
  float *data;
};

//function definitions

//creates a new matrix initialized with zeroes.
struct Matrix* newMatrix(int rows, int cols);

//Creates new matrix with newMatrix(), fills returned matrix with data from d array.
struct Matrix* initMatrix(float *d, int rows, int cols);
#endif
