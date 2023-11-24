#ifndef __CPP_SSSVG_GRADIENT_HPP_
#define __CPP_SSSVG_GRADIENT_HPP_
#include <map>
#include <vector>
#include <string>
#include <numeric>
#include "tools.hpp"
#include "style.hpp"
#include "stop.hpp"

namespace cpp_sssvg{

std::string gradient(
  std::string name,
  std::string id,
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
    return cpp_sssvg::tagText(
      name,
      stop_string,
      attr
    );
};

std::string gradient(
  std::string name,
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
      name,
      stop_string,
      attr
    );
};

}

#endif
