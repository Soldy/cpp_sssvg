#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "../doctest.h"
#include "../include/image.hpp"


std::string image;
TEST_SUITE("image test") {
    TEST_CASE("Creation" * doctest::timeout(0.00009)) {
        image = cpp_sssvg::image(
          10,
          10,
          110,
          110,
          "testimage.png"
        );
    };
    TEST_CASE("Correct value"){
        CHECK(image == "<image height=\"110\" href=\"testimage.png\" width=\"110\" x=\"10\" y=\"10\" />");
    };
};
