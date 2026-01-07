#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;
public:
    void input() {
        cin >> length >> width >> height;
    }
    double volume() {
        return length * width * height;
    }
    void show_volume(int i) {
        cout << "第 " << i << " 个长方柱的体积: " << volume() << endl;
    }
};

int main() {
    Box boxes[3]; // 定义对象数组
    for (int i = 0; i < 3; i++) {
        cout << "请输入第 " << i + 1 << " 个长方柱的长、宽、高: ";
        boxes[i].input();
    }
    for (int i = 0; i < 3; i++) {
        boxes[i].show_volume(i + 1);
    }
    return 0;
}