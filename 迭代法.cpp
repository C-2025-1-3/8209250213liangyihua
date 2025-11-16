#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	double a = 0;
	cout << "请输入一个数a=";
	cin >> a;
	if (a < 0) {
		cout << "输入的a值不符合取值范围" << endl;
		return 1;
	}
	else if (a == 0) {
		cout << "a的平方根为：" << fixed << setprecision(8) << 0.0 << endl;
		return 0;
	}
	else {
		double xn = a;
		double xn1;
		const double eps = 1e-5;
		do {
			xn1 = 0.5 * (xn + a / xn);
			double temp = xn;
			xn = xn1;
			xn1 = temp;
		} while (fabs(xn - xn1) >= eps);
		cout << "a的平方根为：" << fixed << setprecision(8) << xn << endl;
	}
	
	return 0;
}
