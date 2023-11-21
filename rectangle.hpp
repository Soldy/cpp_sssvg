#ifndef __CPP_SSSVG_RECTANGLE_HPP_
#define __CPP_SSSVG_RECTANGLE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"

namespace cpp_sssvg{

std::string rectangle(
  int start_x,
  int start_y,
  int width,
  int height,
  int r_x,
  int r_y,
  std::string style
){
    std::map<
      std::string,
      std::string
    > attr {
      {"cx", std::to_string(start_x)},
      {"cy",std::to_string(start_y)},
      {"width", std::to_string(width)},
      {"height", std::to_string(height)},
      {"rx", std::to_string(r_x)},
      {"ry", std::to_string(r_y)},
      {"style", style}
    };
    return cpp_sssvg::tag(
      "rect",
      attr
    );
};

}

#endif
