#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "circle.hpp"


std::string circle;
TEST_SUITE("circle test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        circle = cpp_sssvg::circle(
          10,
          10,
          60,
          cpp_sssvg::style(
            "#000000",
            3
          )
        );
    };
    TEST_CASE("Correct value"){
        CHECK(circle == "<circle cx=\"10\" cy=\"10\" r=\"60\" style=\"stroke:#000000;stroke-width:3;fill:none\" />");
    };
};
