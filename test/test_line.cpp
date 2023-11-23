#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/line.hpp"


std::string line;
TEST_SUITE("circle test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        line = cpp_sssvg::line(
          10,
          20,
          10,
          20,
          cpp_sssvg::style(
            "#000000",
            3
          )
        );
    };
    TEST_CASE("Correct value"){
        CHECK(line == "<line style=\"stroke:#000000;stroke-width:3;fill:none\" x1=\"10\" x2=\"10\" y1=\"20\" y2=\"20\" />");
    };
};
