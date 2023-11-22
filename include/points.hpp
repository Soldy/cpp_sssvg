#ifndef __CPP_SSSVG_POINTS_HPP_
#define __CPP_SSSVG_POINTS_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string polyPointsCreate(
  std::vector<
    std::array<int, 2>
  > points
){
    std::string out = "";
    for(
      std::string::size_type i = 0; 
      i < points.size(); 
      ++i
    ){
        if(i > 0)
            out += " ";
        out += (
          std::to_string(
            points[i][0]
          )+
          ","+
          std::to_string(
            points[i][1]
          )
        );
    }
    return out;
};


std::string points(
  std::vector<
    std::array<int, 2>
  > points
){
    return polyPointsCreate(
      points
    );
};
}

#endif
