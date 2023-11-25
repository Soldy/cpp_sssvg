#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/circle.hpp"
#include "../include/group.hpp"


std::string group;
TEST_SUITE("group test") {
    TEST_CASE("Creation" * doctest::timeout(0.00014)) {
        std::map<std::string, std::string> style;
        style["fill"] = "#ff0000";
        group = cpp_sssvg::group(
          cpp_sssvg::style(
            style
          ),
          {cpp_sssvg::circle(
            10,
            10,
            60,
            cpp_sssvg::style(
              "#000000",
              3
            )
          )}
        );
    };
    TEST_CASE("Correct value"){
        CHECK(group == "<g style=\"fill:#ff0000\"><circle cx=\"10\" cy=\"10\" r=\"60\" style=\"stroke:#000000;stroke-width:3;fill:none\" /></g>");
    };
};
