#define CATCH_CONFIG_MAIN
#include "../headers/catch.h"
#include "../headers/Matrix.h"
#include "../headers/basics.h"
#include <iostream>

TEST_CASE( "getLines", "[getLines]" ) {
	
	Matrix* mat = new Matrix(10,20);
	
	REQUIRE( mat->getLines() == 10 );
	
	delete mat;
}

TEST_CASE( "getColumns", "[getColumns]" ) {
	
	Matrix* mat = new Matrix(10,20);
	
	REQUIRE( mat->getColumns() == 20 );
	
	delete mat;
}

TEST_CASE( "setGetEntry", "[setGetEntry]" ) {
	
	Matrix* mat = new Matrix(10,20);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			mat->setEntry(i, j, i + j);
		}
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			REQUIRE( mat->getEntry(i,j) == i + j );
		}
	}
	
	delete mat;
}

TEST_CASE( "getColumn", "[getColumn]" ) {
	
	Matrix* mat = new Matrix(10,20);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			mat->setEntry(i, j, i + j);
		}
	}
	
	for (int j = 0; j < 20; j++) {
		Matrix* column = mat->getColumn(j);
		for (int i = 0; i < 10; i++) {
			REQUIRE( column->getEntry(i,0) == i + j );
		}
		delete column;
	}
	
	delete mat;
}

TEST_CASE( "containsColumn", "[containsColumn]" ) {
	
	Matrix* column = new Matrix(10,1);
	
	for (int i = 0; i < 10; i++){
		column->setEntry(i,0,i+1);
	}
	
	for (int i = 1; i <= 10; i++){
		Matrix* ncolumn = new Matrix(i,1);
		for (int j = 1; j <= i; j++){
			ncolumn->setEntry(j-1,0,j);
		}
		REQUIRE( column->containsColumn(ncolumn) == true );
		ncolumn->setEntry(0,0,20);
		REQUIRE( column->containsColumn(ncolumn) == false );
		delete ncolumn;
	}
	
	delete column;
}

TEST_CASE( "getNorm", "[getNorm]" ) {

	Matrix* column = new Matrix(10,1);
	
	for (int i = 0; i < 10; i++){
		column->setEntry(i,0,i+1);
	}
	
	REQUIRE( column->getNorm() == 55 );
	
	delete column;
}

TEST_CASE( "getCosystolicNorm", "[getCosystolicNorm]" ) {
	
	Matrix* cochain = new Matrix(6, 1);
	
    cochain->setEntry(0,0,1);
    cochain->setEntry(1,0,0);
    cochain->setEntry(2,0,0);
    cochain->setEntry(3,0,0);
    cochain->setEntry(4,0,0);
    cochain->setEntry(5,0,1);
	
	Matrix* coboundaryMat = coboundaryMatrix(4, 0);
	
    REQUIRE( cochain->getCosystolicNorm(4, 1, coboundaryMat) == 2 );

	delete coboundaryMat;
    delete cochain;
}

TEST_CASE( "getCoboundaryExpansion", "[getCoboundaryExpansion]" ) {
	
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
    
    Matrix* coboundaryMat = coboundaryMatrix(5, 1);
    Matrix* coboundaryMat1 = coboundaryMatrix(5, 0);
    
    REQUIRE( cochain->getCoboundaryExpansion(5, 1, coboundaryMat, coboundaryMat1) == 1.66667 );
    
    delete coboundaryMat;
    delete coboundaryMat1;
    delete cochain;
}

TEST_CASE( "cheegerConstant", "[cheegerConstant]" ) {
	
	float cc = cheegerConstant(4, 1);
	std::cout << cc << std::endl;
	
	REQUIRE( cc == 2 );
}
