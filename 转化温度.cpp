#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << fixed << setprecision(2);
	double F =0 ;
	cout << "华氏温度为：";
	cin >> F;
	double C =0 ;
	cout << "摄氏温度为:";
	cin >> C;
	cout << "C=" <<setprecision(2)<< 5 * (F - 32) / 9 << endl;
	system("pause");
	return 0;
}