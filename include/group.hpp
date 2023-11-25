#ifndef __CPP_SSSVG_GROUP_HPP_
#define __CPP_SSSVG_GROUP_HPP_
#include <vector>
#include <string>
#include <numeric>
#include "tools.hpp"
#include "style.hpp"

namespace cpp_sssvg{

std::string group(
  std::string style,
  std::vector<std::string> inners
){
    std::map<
      std::string,
      std::string
    > attr;
    std::string inner_string = std::accumulate(
      inners.begin(),
      inners.end(),
      std::string("")
    );
    attr["style"] = style;
    return cpp_sssvg::tagText(
      "g",
      inner_string,
      attr
    );
};

}

#endif
