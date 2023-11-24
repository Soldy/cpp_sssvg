#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/stop.hpp"


std::string stop;
TEST_SUITE("stop test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        stop = cpp_sssvg::stop(
          30,
          "#000000"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(stop == "<stop offset=\"30%\" stop-color=\"#000000\" />");
    };
};
