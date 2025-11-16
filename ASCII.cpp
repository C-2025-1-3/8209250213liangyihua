#include<iostream>
using namespace std;

int main() {
	char ch=0;
	cout << "请输入一个字符：" << ch << endl; 
		cin >> ch;
		if (islower(ch)) {
			cout << "转换为大写" << endl;
		}
		else {
			int nextAscii = ch + 1;
			cout << "后继字符的ASCII" << ch;
		}
		return 0;
	
		system("pause");
}
