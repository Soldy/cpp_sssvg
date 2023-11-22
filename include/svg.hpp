#ifndef __CPP_SSSVG_HPP_
#define __CPP_SSSVG_HPP_
#include <map>
#include <vector>
#include <string>
#include "safe.hpp"
#include "tools.hpp"
#include "struct.hpp"


namespace cpp_sssvg{

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
