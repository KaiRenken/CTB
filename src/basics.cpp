#include <iostream>
#include "Matrix.h"
#include <stdlib.h>
#include <string>
#include <bitset>
#include <math.h>

int nChooseK(int n, int k)
{

	if (k == 0)
	{
		return 1;
	}

	if (2*k > n)
	{
		k = n-k;
	}

	int result = 1;

	for (int i = 1; i <= k; i++)
	{
		result = result * (n - k + i) / i;
	}

	return result;
}

Matrix* vChooseK(Matrix* v, int k)
{
    Matrix* result = new Matrix(v->getLines(), pow(2, v->getLines()) - 1);

    char digit;
    int idigit;
    int counter;

    for (int s = 1; s <= pow(2, v->getLines()) - 1; s++)
    {
        std::string binaryS = std::bitset<v->getLines()>(s).to_string();

        counter = 0;

        for (int i = 1; i <= v->getLines(); i++)
        {
            digit = binaryS[i];
            idigit = (int)digit;
            if (idigit == 1)
            {
                result->setEntry(counter, s-1, v->getEntry(i,0));
                counter++;
            }
        }
        for (int i = counter; i < v->getLines(); i++)
        {
            result->setEntry(counter, s-1, 0);
        }
    }
    return result;
}

Matrix* multMats(Matrix* mat1, Matrix* mat2)
{
	int temp;

	Matrix* result = new Matrix(mat1->getLines(), mat2->getColumns());

	for (int i = 0; i < mat1->getLines(); i++)
	{
		for (int j = 0; j < mat2->getColumns(); j++)
		{
			temp = 0;
			for (int n = 0; n < mat1->getColumns(); n++)
			{
				temp = temp + mat1->getEntry(i,n) * mat2->getEntry(n,j);
			}
			result->setEntry(i,j,temp);
		}
	}
	return result;
}

Matrix* transposeMatrix(Matrix* M)
{
    Matrix* result = new Matrix(M->getColumns(), M->getLines());

    for (int i = 0; i < M->getLines(); i++)
    {
        for (int j = 0; j < M->getColumns(); j++)
        {
            result->setEntry(j, i, M->getEntry(i,j));
        }
    }

    return result;
}
