#include <iostream>
using namespace std;

int monkeyEat(int day) {
    // 递归边界：第10天
    if (day == 10) {
        return 1;
    }
    // 递归公式：(后一天的桃子数 + 1) * 2
    return (monkeyEat(day + 1) + 1) * 2;
}

int main() {
    int total = monkeyEat(1);
    cout << "第一天猴子共摘了 " << total << " 个桃子。" << endl;
    return 0;
}