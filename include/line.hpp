#ifndef __CPP_SSSVG_CIRCLE_HPP_
#define __CPP_SSSVG_CIRCLE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string line(
  int start_x,
  int start_y,
  int end_x,
  int end_y,
  std::string style
){
    std::map<
      std::string,
      std::string
    > attr;
    
    attr["x1"] = std::to_string(start_x);
    attr["y1"] = std::to_string(start_y);
    attr["x2"] = std::to_string(end_x);
    attr["y2"] = std::to_string(end_y);
    attr["style"] = style;
    return cpp_sssvg::tag(
      "line",
      attr
    );
};
}

#endif
