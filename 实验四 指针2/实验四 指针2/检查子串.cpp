#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char* s1, const char* s2) {
    int n = strlen(s1);
    int m = strlen(s2);

    for (int i = 0; i <= m - n; i++) {
        bool match = true;
        for (int j = 0; j < n; j++) {
            if (*(s2 + i + j) != *(s1 + j)) { // 使用指针偏移访问
                match = false;
                break;
            }
        }
        if (match) return i;
    }
    return -1;
}

int main() {
    char str1[100], str2[100];
    cout << "输入子串 s1: "; cin >> str1;
    cout << "输入主串 s2: "; cin >> str2;
    cout << "结果下标: " << indexof(str1, str2) << endl;
    return 0;
}