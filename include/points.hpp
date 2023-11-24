#ifndef __CPP_SSSVG_POINTS_HPP_
#define __CPP_SSSVG_POINTS_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string points(
  std::vector<
    std::array<int, 2>
  > points_in
){
    std::string out = "";
    for(
      std::string::size_type i = 0; 
      i < points_in.size(); 
      ++i
    ){
        if(i > 0)
            out += " ";
        out += (
          std::to_string(
            points_in[i][0]
          )+
          ","+
          std::to_string(
            points_in[i][1]
          )
        );
    }
    return out;
};

}

#endif
