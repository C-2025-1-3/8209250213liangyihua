#include<iostream>
using namespace std;

int main() {
	int a = 0;
	cout << "a=";
	cin >> a;
	int b = 0;
	cout << "b=";
	cin >> b;
    // 求最大公约数
        int gcd = 1;
        int smaller = (a < b) ? a : b;  // 取较小的数

        for (int i = 1; i <= smaller; i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }

        // 求最小公倍数
        int lcm = (a > b) ? a : b;  // 从较大的数开始

        while (true) {
            if (lcm % a == 0 && lcm % b == 0) {
                break;
            }
            lcm++;
        }

        cout << "最大公约数: " << gcd << endl;
        cout << "最小公倍数: " << lcm << endl;

        return 0;
    }
	
