#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/rectangle.hpp"


std::string rectangle;
TEST_SUITE("rectangle test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        rectangle = cpp_sssvg::rectangle(
          10,
          10,
          10,
          10,
          0,
          0,
          cpp_sssvg::style(
            "#000000",
            3
          )
        );
    };
    TEST_CASE("Correct value"){
        CHECK(rectangle == "<rect cx=\"10\" cy=\"10\" height=\"10\" rx=\"0\" ry=\"0\" style=\"stroke:#000000;stroke-width:3;fill:none\" width=\"10\" />");
    };
};
