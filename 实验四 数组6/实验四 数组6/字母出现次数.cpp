#include <iostream>
#include <cstring>
#include <cctype> // 用于 tolower
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (isalpha(s[i])) { // 只处理英文字母
            char lower = tolower(s[i]);
            counts[lower - 'a']++;
        }
    }
}

int main() {
    char str[200];
    int counts[26] = { 0 };

    cout << "请输入一个字符串: ";
    cin.getline(str, 200); // 使用 getline 以读取空格

    count(str, counts);

    cout << "各字母出现次数: " << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << (char)('a' + i) << ": " << counts[i] << " 次" << endl;
        }
    }
    return 0;
}