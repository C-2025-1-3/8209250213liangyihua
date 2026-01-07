#include <iostream>
#include <iomanip> // 用于格式化输出
#include <cmath>

using namespace std;

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int number = 2; // 从第一个素数2开始找

    cout << "前 200 个素数如下：" << endl;
    while (count < 200) {
        if (is_prime(number)) {
            cout << setw(6) << number; // 设置输出宽度
            count++;
            if (count % 10 == 0) cout << endl; // 每行10个
        }
        number++;
    }
    return 0;
}