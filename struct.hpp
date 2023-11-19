#ifndef __CPP_SSSVG_STRUCT_HPP_
#define __CPP_SSSVG_STRUCT_HPP_
#include <map>
#include <vector>
#include <string>

namespace cpp_sssvg{
struct element_struct{
    int unsigned referenceId; // That is not an attribute. 
    std::string tag;
    std::map<std::string, std::string> attributes;
    std::vector<int unsigned> childs ;// One element can be an element of multiple parents.
};

}
#endif
