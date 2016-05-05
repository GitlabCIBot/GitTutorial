#include "catch.hpp"
#include "../src/fib.h"

TEST_CASE( "Fibonacci" ) {
    SECTION ( "Test Input Range" ) {
        REQUIRE(fib(1) == 1);
        REQUIRE(fib(2) == 1);
        REQUIRE(fib(3) == 2);
        REQUIRE(fib(4) == 3);
        REQUIRE(fib(5) == 5);
    }
}
