#include <iostream>
using namespace std;

class Student {
public:
    int id;
    int score;
};

// max 函数：参数为指向对象的指针
void max(Student* p) {
    int maxScore = p[0].score;
    int maxId = p[0].id;

    for (int i = 1; i < 5; i++) {
        if ((p + i)->score > maxScore) { // 指针方式访问
            maxScore = (p + i)->score;
            maxId = (p + i)->id;
        }
    }
    cout << "最高成绩者的学号是: " << maxId << " (成绩: " << maxScore << ")" << endl;
}

int main() {
    Student studs[5] = {
        {101, 85}, {102, 92}, {103, 78}, {104, 95}, {105, 88}
    };
    max(studs); // 数组名即为首地址指针
    return 0;
}