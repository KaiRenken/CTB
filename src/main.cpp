#include <iostream>
#include "Matrix.h"
#include "basics.h"

int main()
{
    Matrix* v = new Matrix(5,1);
    v->setEntry(0,0,1);
    v->setEntry(1,0,2);
    v->setEntry(2,0,3);
    v->setEntry(3,0,4);
    v->setEntry(4,0,5);
    Matrix* sets = vChooseK(v,3);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << sets->getEntry(i,j) << " ";
        }
        std::cout << std::endl;
    }
    delete sets;
    delete v;

	return 0;
}
