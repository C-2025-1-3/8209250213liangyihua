#include<iostream>
using namespace std;

int main() {
	double price = 0.8;
	int apple = 2;
	double total = 0;
	int days = 0;
	while (total < 100)
	{
		total += apple * price;
		days++;
		apple *= 2;
	}
	double average = total / days;
	cout << "总天数：" << days << endl;
	cout << "总花费：" << total << "元" << endl;
	cout << "每天平均花费：" << average << "元" << endl;
	system("pause");

	return 0;
}
