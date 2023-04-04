#ifndef __CPP_SSSVG_HPP_
#define __CPP_SSSVG_HPP_
#include <map>
#include <vector>
#include <string>


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
}
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
}
std::string tag(std::string tag_){
     std::string out = "<"+tag_+" />";
     return out;
}
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
}
std::string endTag(std::string tag_){
     std::string out = "</"+tag_+">";
     return out;
}
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
struct element_struct{
    int unsigned referenceId; // That is not an attribute. 
    std::string tag;
    std::map<std::string, std::string> attributes;
    std::vector<int unsigned> childs ;// One element can be an element of multiple parents.
};
int unsigned referenceSerial = 0;
class Svg{
  private:
    cpp_sssvg::element_struct tags;
  public:
    std::string toString(){
        std::string out = cpp_sssvg::startTag("svg");
        out += cpp_sssvg::endTag("svg");
        return out;
    };
};
}
#endif
