#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "style.hpp"


std::string style;
TEST_SUITE("style test") {
    TEST_CASE("create style" * doctest::timeout(0.00003)) {
        style = cpp_sssvg::style(
          "#000000",
          3
        );
    };
    TEST_CASE("Correct value"){
        CHECK(style == "stroke:#000000;stroke-width:3;fill:none");
    };
};
