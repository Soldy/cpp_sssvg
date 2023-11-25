#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/text.hpp"


std::string text;
std::string text_style;
TEST_SUITE("text test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        text = cpp_sssvg::text(
          10,
          10,
          "test"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(text == "<text x=\"10\" y=\"10\">test</text>");
    };
    TEST_CASE("Creation with style" * doctest::timeout(0.00009)) {
        text_style = cpp_sssvg::text(
          10,
          10,
          cpp_sssvg::style(
            "#000000",
            3
          ),
          "test"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(text_style == "<text style=\"stroke:#000000;stroke-width:3;fill:none\" x=\"10\" y=\"10\">test</text>");
    };
};
