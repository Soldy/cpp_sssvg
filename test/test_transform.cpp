#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <vector>
#include <array>
#include <unordered_map>
#include "../doctest.h"
#include "../include/transform.hpp"


std::string transform;
TEST_SUITE("style test") {
    TEST_CASE("Create transform" * doctest::timeout(0.00003)) {
        transform = cpp_sssvg::transform(
          {
            "rotate(90)",
            "translate(-36 45.5)"
          }
        );
    };
    TEST_CASE("Correct value"){
        CHECK(transform == "rotate(90)translate(-36 45.5)");
    };
};
