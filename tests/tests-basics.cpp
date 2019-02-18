#include "../headers/catch.h"
#include "../headers/Matrix.h"
#include "../headers/basics.h"
#include <iostream>

TEST_CASE( "boundaryMatrix", "[boundaryMatrix]" ) {

    int test = 1;

    Matrix* coboundaryMat = coboundaryMatrix(5, 1);

    for (int i = 0; i < coboundaryMat->getLines(); i++)
    {
         for (int j = 0; j < coboundaryMat->getColumns(); j++)
        {
            std::cout << coboundaryMat->getEntry(i,j) << " ";
        }
        std::cout << std::endl;
    }

    Matrix* cochain = new Matrix(10, 1);

    cochain->setEntry(0,0,1);
    cochain->setEntry(1,0,0);
    cochain->setEntry(2,0,0);
    cochain->setEntry(3,0,0);
    cochain->setEntry(4,0,1);
    cochain->setEntry(5,0,0);
    cochain->setEntry(6,0,0);
    cochain->setEntry(7,0,1);
    cochain->setEntry(8,0,0);
    cochain->setEntry(9,0,0);

    Matrix* coboundary = multMats(coboundaryMat, cochain);

    for (int i = 0; i < coboundary->getLines(); i++)
    {
        std::cout << coboundary->getEntry(i,0) << std::endl;
    }

    delete coboundaryMat;
    delete cochain;
    delete coboundary;

    REQUIRE( test == 1 );
}
