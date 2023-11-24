#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/style.hpp"


std::string style_2;
std::string style_3;
std::string style_4;
TEST_SUITE("style test") {
    TEST_CASE("create style" * doctest::timeout(0.00003)) {
        style_2 = cpp_sssvg::style(
          "#000000",
          3
        );
    };
    TEST_CASE("Correct value"){
        CHECK(style_2 == "stroke:#000000;stroke-width:3;fill:none");
    };
    TEST_CASE("create style" * doctest::timeout(0.00003)) {
        style_3 = cpp_sssvg::style(
          "#000000",
          3,
          "#00ff00"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(style_3 == "stroke:#000000;stroke-width:3;fill:#00ff00");
    };
    TEST_CASE("create style" * doctest::timeout(0.00003)) {
        style_4 = cpp_sssvg::style(
          "#000000",
          3,
          "#00ff00",
          "evenodd"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(style_4 == "stroke:#000000;stroke-width:3;fill:#00ff00;fill-rule:evenodd");
    };
};
