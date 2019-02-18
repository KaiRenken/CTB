#ifndef BASICS_H
#define BASICS_H

int* intToBinary(int n);
int nChooseK(int n, int k);
Matrix* binaryCombinations(int n, int k);
Matrix* vChooseK(Matrix* v, int k);
Matrix* multMats(Matrix* mat1, Matrix* mat2);
Matrix* boundaryMatrix(int n, int k);
Matrix* coboundaryMatrix(int n, int k);
Matrix* transposeMatrix(Matrix* M);
Matrix* addMats(Matrix* mat1, Matrix* mat2);
float cheegerConstant(int n, int k);

#endif
