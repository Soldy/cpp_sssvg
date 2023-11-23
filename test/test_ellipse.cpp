#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/ellipse.hpp"


std::string ellipse;
TEST_SUITE("ellipse test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        ellipse = cpp_sssvg::ellipse(
          10,
          10,
          60,
          30,
          cpp_sssvg::style(
            "#000000",
            3
          )
        );
    };
    TEST_CASE("Correct value"){
        CHECK(ellipse == "<ellipse cx=\"10\" cy=\"10\" rx=\"60\" ry=\"30\" style=\"stroke:#000000;stroke-width:3;fill:none\" />");
    };
};
