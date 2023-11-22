#ifndef __CPP_SSSVG_POLYLINE_HPP_
#define __CPP_SSSVG_POLYLINE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "points.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string polyline(
  std::string points,
  std::string style
){
    return cpp_sssvg::tag(
      "polyline",
      {
          {"points", points},
          {"style", style}
      }
    );
};

}

#endif
