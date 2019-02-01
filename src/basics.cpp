#include "Matrix.h"

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
