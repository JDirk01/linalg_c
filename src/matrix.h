#ifndef MATRIX_H
#define MATRIX_H

struct Matrix {
  int rows;
  int cols;
  double *data;
};

//function definitions

//creates a new matrix initialized with zeroes.
Matrix* newMatrix(int rows, int cols);

//Creates new matrix with newMatrix(), fills returned matrix with data from d array.
Matrix* initMatrix(double *d, int rows, int cols);

#endif
