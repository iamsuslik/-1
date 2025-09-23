#include <iostream>
#include <string>
#include <windows.h>


long eliminate_unset_bits(std::string number);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string input;

    std::cout << "Введите двоичное число (только 0 и 1): ";
    std::cin >> input;
    
    long result = eliminate_unset_bits(input);
    
    if (result != -1) {
        std::cout << "Результат: eliminate_unset_bits(\"" << input << "\") = " << result << std::endl;
    }
    
    return 0;
}
