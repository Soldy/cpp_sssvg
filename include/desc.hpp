#ifndef __CPP_SSSVG_DESC_HPP_
#define __CPP_SSSVG_DESC_HPP_
#include <map>
#include <vector>
#include <array>
#include <string>
#include "tools.hpp"
#include "style.hpp"


namespace cpp_sssvg{

std::string desc(std::string text_in){
    return cpp_sssvg::tagText(
      "desc",
      text_in
    );
};

}

#endif
