#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/radialGradient.hpp"


std::string gradient;
TEST_SUITE("radialGradient test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        gradient = cpp_sssvg::radialGradient(
          "gradient",
          "rotate(0)",
          {cpp_sssvg::stop(
            30,
            "#000000"
          )}
        );
    };
    TEST_CASE("Correct value"){
        CHECK(gradient == "<radialGradient gradientTransform=\"rotate(0)\" id=\"gradient\"><stop offset=\"30%\" stop-color=\"#000000\" /></radialGradient>");
    };
};
