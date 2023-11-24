#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/stop.hpp"
#include "../include/linearGradient.hpp"


std::string gradient;
TEST_SUITE("linearGradient test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        gradient = cpp_sssvg::linearGradient(
          "gradient",
          "rotate(0)",
          {cpp_sssvg::stop(
            30,
            "#000000"
          )}
        );
    };
    TEST_CASE("Correct value"){
        CHECK(gradient == "<linearGradient gradientTransform=\"rotate(0)\" id=\"gradient\"><stop offset=\"30%\" stop-color=\"#000000\" /></linearGradient>");
    };
};
