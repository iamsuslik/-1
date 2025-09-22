#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

long eliminate_unset_bits(string number);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string input;

    cout << "Введите двоичное число (только 0 и 1): ";
    cin >> input;
    
    long result = eliminate_unset_bits(input);
    
    if (result != -1) {
        cout << "Результат: eliminate_unset_bits(\"" << input << "\") = " << result << endl;
    }
    
    return 0;
}
