#include "../headers/catch.h"
#include "../headers/Matrix.h"
#include "../headers/basics.h"

TEST_CASE( "cheegerConstant", "[cheegerConstant]" ) {

    int c1 = cheegerConstant(3, 1) * 100;
    int c2 = cheegerConstant(4, 1) * 100;
    int c3 = cheegerConstant(4, 2) * 100;
    int c4 = cheegerConstant(5, 1) * 100;
    int c5 = cheegerConstant(5, 2) * 100;
    int c6 = cheegerConstant(5, 3) * 100;

	REQUIRE( c1 == 100);
	REQUIRE( c2 == 200);
	REQUIRE( c3 == 100);
	REQUIRE( c4 == 166);
	REQUIRE( c5 == 200);
	REQUIRE( c6 == 100);

}
