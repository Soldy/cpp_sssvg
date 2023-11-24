#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/text.hpp"


std::string text;
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
};
