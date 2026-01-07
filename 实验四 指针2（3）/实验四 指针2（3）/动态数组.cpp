#include <iostream>
using namespace std;

// 简单的起泡排序（升序）
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;

    // 1. 建立动态数组
    int* p = new int[n];

    cout << "请输入 " << n << " 个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i); // 指针方式输入
    }

    // 2. 调用排序函数
    sortArray(p, n);

    // 3. 指针方式输出结果
    cout << "排序后的数组: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    // 4. 释放内存
    delete[] p;
    p = nullptr; // 良好的习惯：释放后置空

    return 0;
}