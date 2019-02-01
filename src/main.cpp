#include <iostream>
#include "Matrix.h"
#include "basics.h"

int main()
{
	Matrix* A = new Matrix(2,2);
	Matrix* B = new Matrix(2,1);
	A->setEntry(0,0,2);
	A->setEntry(1,0,0);
	A->setEntry(0,1,0);
	A->setEntry(1,1,2);
	B->setEntry(0,0,1);
	B->setEntry(1,0,2);
	Matrix* product = multMats(A,B);
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			std::cout << product->getEntry(i,j) << " ";
		}
		std::cout << std::endl;
	}
	
	delete A;
	delete B;
	delete product;
	
	return 0;
}
