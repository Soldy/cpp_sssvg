#ifndef __CPP_SSSVG_TEXT_HPP_
#define __CPP_SSSVG_TEXT_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string text(
  int x,
  int y,
  std::string text_in
){
    std::map<
      std::string,
      std::string
    > attr;
    
    attr["x"] = std::to_string(x);
    attr["y"] = std::to_string(y);
    return (
      cpp_sssvg::startTag(
        "text",
        attr
      )+text_in+
      cpp_sssvg::endTag(
        "text"
      )
    );
};
}

#endif
