#include <iostream>
using namespace std;

// 使用引用参数同时计算 GCD 和 LCM
void calculate(int m, int n, int& gcd, int& lcm) {
    int a = m, b = n;
    // 辗转相除法
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;
    lcm = (m * n) / gcd; // 公式：LCM = (m * n) / GCD
}

int main() {
    int m, n, gcd, lcm;
    cout << "请输入两个自然数 m 和 n: ";
    cin >> m >> n;

    calculate(m, n, gcd, lcm);

    cout << "最大公约数: " << gcd << endl;
    cout << "最小公倍数: " << lcm << endl;

    return 0;
}