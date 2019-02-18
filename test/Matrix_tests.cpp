#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "../headers/Matrix.h"

TEST_CASE( "getEntry", "[getEntry]" ) {
	
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
