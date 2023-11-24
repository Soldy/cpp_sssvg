#ifndef __CPP_SSSVG_LINEARGRADIENT_HPP_
#define __CPP_SSSVG_LINEARGRADIENT_HPP_
#include <map>
#include <vector>
#include <string>
#include <numeric>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string linearGradient(
  std::string id,
  std::string transform,
  std::vector<std::string> stops
){
    std::map<
      std::string,
      std::string
    > attr;
    std::string stop_string = std::accumulate(
      stops.begin(),
      stops.end(),
      std::string("")
    );
    attr["id"] = id;
    attr["gradientTransform"] = transform;
    return cpp_sssvg::tagText(
      "linearGradient",
      stop_string,
      attr
    );
};
}

#endif
