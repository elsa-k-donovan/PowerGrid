
#ifndef HELPERFUNCTIONS_HPP_
#define HELPERFUNCTIONS_HPP_

namespace HelperFunctions {
    
    bool containsSubstring(std::string str, std::string subStr);
    
    std::string trim(const std::string str);
    
    std::string chopStr( std::string str, int beg, int end); // chop off parts before beg and after end
    
    std::string reverseStr(std::string str);
    
    std::string toLowerCase(std::string str);
    
    std::string toUpperCase(std::string str);
    
    bool equalsIgnoreCase(std::string str1, std::string str2);
}

#endif
