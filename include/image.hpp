#ifndef __CPP_SSSVG_IMAGE_HPP_
#define __CPP_SSSVG_IMAGE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string image(
  int x,
  int y,
  int height,
  int width,
  std::string url_in
){
    std::map<std::string, std::string> attr;
    attr["x"] = std::to_string(x);
    attr["y"] = std::to_string(y);
    attr["height"] = std::to_string(height);
    attr["width"] = std::to_string(width);
    attr["href"] = url_in;
    return cpp_sssvg::tag(
      "image",
      attr
    );
};

}

#endif
