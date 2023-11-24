#ifndef __CPP_SSSVG_CIRCLE_HPP_
#define __CPP_SSSVG_CIRCLE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"

namespace cpp_sssvg{

std::string stop(
  int offset,
  std::string stop_color
){
    std::map<
      std::string,
      std::string
    > attr;
    attr["offset"] = (std::to_string(offset)+"%");
    attr["stop-color"] = stop_color;
    return cpp_sssvg::tag(
      "stop",
      attr
    );
};
}

#endif
