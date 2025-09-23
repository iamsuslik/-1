#include "lr1.h"
#include <iostream>
#include <string>


long eliminate_unset_bits(std::string number);

long eliminate_unset_bits(std::string number) {
    int res = 0;
    
    if (number.empty()) {
        return 0;
    }
    
    for (char symbol : number) {
        if (symbol == '1') {
            res += 1;
        } else if (symbol != '0') {
            std::cerr << "Error: invalid character '" << symbol << "' in binary string!" << std::endl;
            return INVALID_RESULT; 
        }
    }
    
    if (res == 0) {
        return 0;
    }
    
    return (1L << res) - 1;
}
