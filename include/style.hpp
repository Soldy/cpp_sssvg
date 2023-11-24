#ifndef __CPP_SSSVG_STYLE_HPP_
#define __CPP_SSSVG_STYLE_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>

namespace cpp_sssvg{

std::string style(
  std::string color,
  int width,
  std::string fill,
  std::string rule
){
    return (
      "stroke:"+
      color+
      ";stroke-width:"+
      std::to_string(
        width
      )+
      ";fill:"+
      fill+
      ";fill-rule:"+
      rule
    );
};

std::string style(
  std::string color,
  int width,
  std::string fill
){
    return (
      "stroke:"+
      color+
      ";stroke-width:"+
      std::to_string(
        width
      )+
      ";fill:"+
      fill
    );
};

std::string style(
  std::string color,
  int width
){
    return cpp_sssvg::style(
      color,
      width,
      "none"
    );
};

std::string style(
  std::string color
){
    return cpp_sssvg::style(
      color,
      1,
      "none"
    );
};


std::string style(){
    return cpp_sssvg::style(
      "#000000",
      1,
      "none"
    );
};


}

#endif
