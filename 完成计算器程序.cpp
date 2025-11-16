#include<iostream>
using namespace std;

int main() {
	int a = 0;
	cout << "a=";
	cin >> a;
	
	int b = 0;
	cout << "b=";
	cin >> b;
	
	
	int sum = a + b;
	cout << "sum=" << sum << endl;
	cout << "差等于：" << a - b << endl;
	cout << "乘积等于：" << a * b << endl;
	if (b == 0) {
		cout << "商不存在" << endl;
	}
	else {
		cout << "商等于" << a / b << endl;
	}
	cout << "模等于" << a % 2 << endl;

	system("pause");

	return 0;
}
