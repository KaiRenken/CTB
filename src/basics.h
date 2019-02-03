#ifndef BASICS_H
#define BASICS_H

int* intToBinary(int n);
int nChooseK(int n, int k);
Matrix* binaryCombinations(int n, int k);
Matrix* vChooseK(Matrix* v, int k);
Matrix* multMats(Matrix* mat1, Matrix* mat2);
Matrix* coboundary(Matrix* v, int mod);
Matrix* transposeMatrix(Matrix* M);

#endif
