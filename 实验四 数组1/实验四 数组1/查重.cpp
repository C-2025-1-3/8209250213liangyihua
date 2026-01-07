#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int distinctCount = 0;

    cout << "请输入10个数: ";
    for (int i = 0; i < 10; i++) {
        int val;
        cin >> val;

        // 检查 val 是否已经存在于数组中
        bool exists = false;
        for (int j = 0; j < distinctCount; j++) {
            if (numbers[j] == val) {
                exists = true;
                break;
            }
        }

        // 如果是新数，则存入
        if (!exists) {
            numbers[distinctCount] = val;
            distinctCount++;
        }
    }

    cout << "不同的数有: ";
    for (int i = 0; i < distinctCount; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}