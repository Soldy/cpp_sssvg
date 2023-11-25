#ifndef __CPP_SSSVG_TRANSFORM_HPP_
#define __CPP_SSSVG_TRANSFORM_HPP_
#include <map>
#include <array>
#include <string>
#include <vector>
#include <map>

namespace cpp_sssvg{

std::string transform(
  std::vector<std::string> transform_in
){
    std::string out = "";
    int i = 0;
    for (const auto& value : transform_in){
        out += value;
    }
    return out;
};

}

#endif
