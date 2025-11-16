#include<iostream>
using namespace std;

int main() {
	double i= 0;
	cout << "i=";
	cin >> i;
	
	double j = 0;
	cout << "j=";
	cin >> j;
	
	double k = 0;
	cout << "k=";
	cin >> k;
	double sum = i + j + k;
	cout << "三角形的周长为：" <<sum<< endl;
	i + j > k && i + k > j && j + k > i ? cout << "该三边可以构成三角形" << endl : cout << "该三边不能构成三角形" << endl;
	if (i + j > k && i + k > j && j + k > i && i == j || i == k || j == k)
	{
		cout << "该三角形为等腰三角形" << endl;
	}
	else {
		cout << "该三角形不是等腰三角形" << endl;
	}
	system("pause");

	return 0;
}
