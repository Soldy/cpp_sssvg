#ifndef __CPP_SSSVG_ELLIPSE_HPP_
#define __CPP_SSSVG_ELLIPSE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"

namespace cpp_sssvg{

std::string ellipse(
  int start_x,
  int start_y,
  int r_x,
  int r_y,
  std::string style
){
    std::map<
      std::string,
      std::string
    > attr;
    attr["cx"] = std::to_string(start_x);
    attr["cy"] = std::to_string(start_y);
    attr["rx"] = std::to_string(r_x);
    attr["ry"] = std::to_string(r_y);
    attr["style"] = style;
    return cpp_sssvg::tag(
      "ellipse",
      attr
    );
};

}

#endif
