#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>
using namespace std;

int parseHex(const char* const hexString) {
    int decimal = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char c = toupper(hexString[i]);
        int value;
        if (isdigit(c)) value = c - '0';
        else value = c - 'A' + 10;

        // 累加计算：$decimal = decimal \times 16 + value$
        decimal = decimal * 16 + value;
    }
    return decimal;
}

int main() {
    cout << "A5 的十进制为: " << parseHex("A5") << endl;    // 165
    cout << "1FF 的十进制为: " << parseHex("1FF") << endl;  // 511
    return 0;
}