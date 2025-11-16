#include<iostream>
using namespace std;

int main() {
	double arr[4] = { 0.2,1,5,0 };
	for (int i = 0; i < 5; i++) {
		if(0 < arr[i]&& arr[i] < 1)
		{
			cout << "y=" << 3 - 2 * arr[i] << endl; 
		}
		else if (1 <= arr[i]&& arr[i] < 5)
		{
			cout << "y=" << 2 / 4 * arr[i] + 1 << endl;
}
		else if (5 <= arr[i] && arr[i] < 10) {
			cout << "y=" << arr[i] * arr[i] << endl;
		}
	}
	system("pause");

	return 0;
}
