#ifndef __CPP_SSSVG_TOOLS_HPP_
#define __CPP_SSSVG_TOOLS_HPP_
#include <map>
#include <vector>
#include <string>
#include "safe.hpp"


namespace cpp_sssvg{


std::string attributes(std::map<std::string, std::string> in_){
    std::string out = "";
    for(const auto& [key, value] : in_)
        out += " "+key+"=\""+value+"\"";
    return out;
};

std::string startTag(std::string tag_){
     std::string out = "<"+tag_+">";
     return out;
};

std::string startTag(
    std::string tag_,
    std::map<std::string, std::string> attr_
){
     std::string out = (
       "<"+
       tag_+
       cpp_sssvg::attributes(attr_)+
       ">"
     );
     return out;
};

std::string tag(std::string tag_){
     std::string out = "<"+tag_+" />";
     return out;
};

std::string tag(
  std::string tag_,
  std::map<std::string, std::string> attr_
){
     std::string out = (
       "<"+
       tag_+
       cpp_sssvg::attributes(attr_)+
       " />"
     );
     return out;
};

std::string endTag(std::string tag_){
     std::string out = "</"+tag_+">";
     return out;
};

std::string tagText(
  std::string tag_in_,
  std::string text_in_
){
    return (
      cpp_sssvg::startTag(
        tag_in_
      )+
      text_in_+
      cpp_sssvg::endTag(
        tag_in_
      )
    );
};

std::string tagText(
  std::string tag_in_,
  std::string text_in_,
  std::map<std::string, std::string> attr_
){
    return (
      cpp_sssvg::startTag(
        tag_in_,
        attr_
      )+
      text_in_+
      cpp_sssvg::endTag(
        tag_in_
      )
    );
};

std::string point(
  std::string control_,
  int x,
  int y
){

    std::string out = "";
    out += (
      " "+
      control_+
      " "+
      std::to_string(x)+
      ","+
      std::to_string(y)
    );
    return out;
};

std::string point(
  int x,
  int y
){

    std::string out = "";
    out += (
      " "+
      std::to_string(x)+
      " "+
      std::to_string(y)
    );
    return out;
};

}
#endif
