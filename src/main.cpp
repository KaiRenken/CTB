#include <iostream>
#include <vector>
#include "Matrix.h"
#include "basics.h"

int main()
{
    Matrix* cochain = new Matrix(6, 1);

    cochain->setEntry(0,0,1);
    cochain->setEntry(1,0,0);
    cochain->setEntry(2,0,0);
    cochain->setEntry(3,0,0);
    cochain->setEntry(4,0,0);
    cochain->setEntry(5,0,1);

    std::cout << cochain->getCosystolicNorm(4,1) << std::endl;

    delete cochain;

	return 0;
}
