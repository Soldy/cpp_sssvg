#ifndef __CPP_SSSVG_SAFE_HPP_
#define __CPP_SSSVG_SAFE_HPP_
#include <map>
#include <vector>
#include <string>


namespace cpp_sssvg{


std::string safe_tag_list = "<";
char safe_list = '_';
std::string safe_attr_list = {"\""};


void safe(std::string & checked, std::string unsafe){
    for(std::string::size_type i = 0; i < checked.size(); ++i) {
        for(int c = 0; c < unsafe.size(); c++){
            if(checked[i] == unsafe[c]){
                checked[i] = safe_list;
            }
        }
    }
};

void safeTag(std::string & checked){
    cpp_sssvg::safe(
        checked,
        cpp_sssvg::safe_tag_list
    );
};

void safeAttr(std::string & checked){
    cpp_sssvg::safe(
        checked,
        cpp_sssvg::safe_attr_list
    );
};


}

#endif
