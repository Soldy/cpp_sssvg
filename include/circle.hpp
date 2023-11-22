#ifndef __CPP_SSSVG_CIRCLE_HPP_
#define __CPP_SSSVG_CIRCLE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string circle(
  int start_x,
  int start_y,
  int r,
  std::string style
){
    std::map<
      std::string,
      std::string
    > attr;
    
    attr["cx"] = std::to_string(start_x);
    attr["cy"] = std::to_string(start_y);
    attr["r"] = std::to_string(r);
    attr["style"] = style;
    return cpp_sssvg::tag(
      "circle",
      attr
    );
};
}

#endif
