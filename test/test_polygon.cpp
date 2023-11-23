#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/polygon.hpp"




std::string polygon;
TEST_SUITE("polyline test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        polygon = cpp_sssvg::polygon(
          cpp_sssvg::points(
           {
             {100,10},
             {40,198},
             {190,78},
             {10,78},
             {160,198}
           }
          ),
          cpp_sssvg::style(
            "#000000",
            3
          )
        );
    };
    TEST_CASE("Correct value"){
        CHECK(polygon == "<polygon points=\"100,10 40,198 190,78 10,78 160,198\" style=\"stroke:#000000;stroke-width:3;fill:none\" />");
    };
};
