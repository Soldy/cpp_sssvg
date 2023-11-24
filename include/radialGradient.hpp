#ifndef __CPP_SSSVG_RADIALGRADIENT_HPP_
#define __CPP_SSSVG_RADIALGRADIENT_HPP_
#include <map>
#include <vector>
#include <string>
#include "gradient.hpp"

namespace cpp_sssvg{

std::string radialGradient(
  std::string id,
  std::vector<std::string> stops
){
    return cpp_sssvg::gradient(
      "radialGradient",
      id,
      stops
    );
};

std::string radialGradient(
  std::string id,
  std::string transform,
  std::vector<std::string> stops
){
    return cpp_sssvg::gradient(
      "radialGradient",
      id,
      transform,
      stops
    );
};

}

#endif
