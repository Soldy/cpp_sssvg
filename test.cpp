#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "svg.hpp"


cpp_sssvg::Svg * simple_test;
TEST_SUITE("simple test") {
    TEST_CASE("init" * doctest::timeout(0.00003)) {
        simple_test = new cpp_sssvg::Svg();
    };
    TEST_CASE("startTag" * doctest::timeout(0.000025)){
        std::string result = cpp_sssvg::startTag("svg");
        CHECK(result == "<svg>");
    };
    TEST_CASE("startTag with attributes" * doctest::timeout(0.000025)){
        std::string result = cpp_sssvg::startTag("svg", {{"width","400"},{"height","500"}});
        CHECK(result == "<svg height=\"500\" width=\"400\">");
    };
    TEST_CASE("tag" * doctest::timeout(0.00002)){
        std::string result = cpp_sssvg::tag("svg");
        CHECK(result == "<svg />");
    };
    TEST_CASE("tag with attributes" * doctest::timeout(0.00002)){
        std::string result = cpp_sssvg::tag("svg", {{"width","400"},{"height","500"}});
        CHECK(result == "<svg height=\"500\" width=\"400\" />");
    };
    TEST_CASE("endTag" * doctest::timeout(0.00002)){
        std::string result = cpp_sssvg::endTag("svg");
        CHECK(result == "</svg>");
    };


};
