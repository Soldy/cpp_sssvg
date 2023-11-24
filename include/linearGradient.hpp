#ifndef __CPP_SSSVG_LINEARGRADIENT_HPP_
#define __CPP_SSSVG_LINEARGRADIENT_HPP_
#include <map>
#include <vector>
#include <string>
#include "gradient.hpp"


namespace cpp_sssvg{

std::string linearGradient(
  std::string id,
  std::vector<std::string> stops
){
    return cpp_sssvg::gradient(
      "linearGradient",
      id,
      stops
    );
};

std::string linearGradient(
  std::string id,
  std::string transform,
  std::vector<std::string> stops
){
    return cpp_sssvg::gradient(
      "linearGradient",
      id,
      transform,
      stops
    );
};

}

#endif
