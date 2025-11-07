#include <catch2/catch_test_macros.hpp>

#include "fixed_ring.h"
#include <cstdio>

TEST_CASE("fixed-ring_test") {

    fixed_ring<int, 4> fr;
    REQUIRE(fr.size() == 0);

    fr.push(1);
    REQUIRE(fr.size() == 1);
    REQUIRE(fr.front() == 1);
    REQUIRE(fr.back() == 1);

    fr.push(2);
    REQUIRE(fr.size() == 2);
    REQUIRE(fr.front() == 1);
    REQUIRE(fr.back() == 2);

    fr.push(3);
    REQUIRE(fr.size() == 3);
    REQUIRE(fr.front() == 1);
    REQUIRE(fr.back() == 3);

    fr.push(4);
    REQUIRE(fr.size() == 4);
    REQUIRE(fr.front() == 1);
    REQUIRE(fr.back() == 4);

    fr.push(5);
    REQUIRE(fr.size() == 4);
    REQUIRE(fr.front() == 2);
    REQUIRE(fr.back() == 5);

    fr.push(6);
    REQUIRE(fr.size() == 4);
    REQUIRE(fr.front() == 3);
    REQUIRE(fr.back() == 6);

    fr.pop();
    REQUIRE(fr.size() == 3);
    REQUIRE(fr.front() == 4);
    REQUIRE(fr.back() == 6);
}
