#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/desc.hpp"


std::string desc;
TEST_SUITE("desc test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        desc = cpp_sssvg::desc(
          "test"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(desc == "<desc>test</desc>");
    };
};
