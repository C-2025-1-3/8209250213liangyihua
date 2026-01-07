#include <iostream>
#include "mytriangle.h"

using namespace std;

int main() {
    double a, b, c;
    cout << "请输入三角形的三条边长: ";
    cin >> a >> b >> c;

    if (is_valid(a, b, c)) {
        cout << "该三角形的面积为: " << double_area(a, b, c) << endl;
    }
    else {
        cout << "错误：输入的边长无法构成三角形！" << endl;
    }
    return 0;
}