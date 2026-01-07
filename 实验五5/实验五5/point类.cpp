#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    // 构造函数：初始化为 (60, 80)
    Point(int xVal = 60, int yVal = 80) : x(xVal), y(yVal) {}

    // 修改坐标
    void setPoint(int i, int j) {
        x += i;
        y += j;
    }

    void display() {
        cout << "当前坐标点: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p; // 自动调用构造函数，初始为 (60, 80)
    cout << "初始状态: ";
    p.display();

    p.setPoint(10, 20); // 修改为 (70, 100)
    cout << "修改后状态: ";
    p.display();

    return 0;
}