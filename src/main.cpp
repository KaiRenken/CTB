#include <iostream>
#include <vector>
#include "Matrix.h"
#include "basics.h"

int main()
{
    Matrix* bound = coboundaryMatrix(7, 3);
    
    for (int i = 0; i < bound->getLines(); i++)
    {
		for (int j = 0; j < bound->getColumns(); j++)
		{
			std::cout << bound->getEntry(i, j) << " ";
		}
		
		std::cout << std::endl;
	}

	delete bound;
	return 0;
}
