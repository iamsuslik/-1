#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

long eliminate_unset_bits(string number);

long eliminate_unset_bits(string number) {
    int res = 0;
    
    if (number.empty()) {
        return 0;
    }
    
    for (char symbol : number) {
        if (symbol == '1') {
            res += 1;
        } else if (symbol != '0') {
            cerr << "Error: invalid character '" << symbol << "' in binary string!" << endl;
            return -1; 
        }
    }
    
    if (res == 0) {
        return 0;
    }
    
    return (1L << res) - 1;
}
