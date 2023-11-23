#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/polyline.hpp"




std::string polyline;
TEST_SUITE("polyline test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        polyline = cpp_sssvg::polyline(
          cpp_sssvg::points(
           {
             {20,20},
             {40,200},
             {60,40},
             {80,180},
             {120,60},
             {140,160}
           }
          ),
          cpp_sssvg::style(
            "#000000",
            3
          )
        );
    };
    TEST_CASE("Correct value"){
        CHECK(polyline == "<polyline points=\"20,20 40,200 60,40 80,180 120,60 140,160\" style=\"stroke:#000000;stroke-width:3;fill:none\" />");
    };
};
