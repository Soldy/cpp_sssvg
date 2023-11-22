#ifndef __CPP_SSSVG_POLYGON_HPP_
#define __CPP_SSSVG_POLYGON_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "points.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string polygon(
  std::string points,
  std::string style
){
    return cpp_sssvg::tag(
      "polygon",
      {
          {"points", points},
          {"style", style}
      }
    );
};

}

#endif
