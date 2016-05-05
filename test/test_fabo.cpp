#include "catch.hpp"
#include "../src/fab.h"

TEST_CASE( "Fibonacci" ) {
    SECTION ( "Test Input Range" ) {
        REQUIRE(fab(1) == 1);
        REQUIRE(fab(2) == 1);
        REQUIRE(fab(3) == 2);
        REQUIRE(fab(4) == 3);
        REQUIRE(fab(5) == 5);
    }
}
