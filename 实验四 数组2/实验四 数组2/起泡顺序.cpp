#include <iostream>
#include <algorithm> // 用于 swap
using namespace std;

void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double numbers[10];
    cout << "请输入10个双精度数字: ";
    for (int i = 0; i < 10; i++) cin >> numbers[i];

    bubbleSort(numbers, 10);

    cout << "排序后的数字: ";
    for (int i = 0; i < 10; i++) cout << numbers[i] << " ";
    return 0;
}