#include <iostream>
using namespace std;

class Time {
private: // (1) 私有数据成员
    int hour;
    int minute;
    int sec;

public: // (2) 公用成员函数作为对外接口
    // (3) 在类体内定义成员函数
    void set_time() {
        cin >> hour >> minute >> sec;
    }
    void show_time() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main() {
    Time t1;
    cout << "请输入时间 (时 分 秒): ";
    t1.set_time();  // 调用公有函数输入
    cout << "当前时间: ";
    t1.show_time(); // 调用公有函数输出
    return 0;
}