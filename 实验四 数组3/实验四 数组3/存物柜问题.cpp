#include <iostream>
using namespace std;

int main() {
    bool lockers[101] = { false }; // 索引0不用，1-100代表柜子

    for (int student = 1; student <= 100; student++) {
        // 每个学生从第 student 个柜子开始，步长为 student
        for (int j = student; j <= 100; j += student) {
            lockers[j] = !lockers[j]; // 改变状态
        }
    }

    cout << "所有开着的柜子号码: " << endl;
    for (int i = 1; i <= 100; i++) {
        if (lockers[i]) cout << i << " ";
    }
    return 0;
}