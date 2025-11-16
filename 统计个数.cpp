#include<iostream>
using namespace std;

int main() {
	char c;
	int letters = 0, space = 0, digits = 0, others = 0;
	while ((c = cin.get()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')) {
			letters++;
		}
		else if (c == ' ') {
			space++;
		}
		else if (c >= '0' && c <= '9') {
			digits++;
		}
		else{
			others++;
		}
	}
	cout << "英文字母个数：" << letters << endl;
	cout << "空格个数" << space << endl;
	cout << "数字字符个数：" << digits << endl;
	cout << "其它字符个数:" << others << endl;
	system("pause");

	return 0;
}
