#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
    void set_value(int n, const char* s, char g);
    void display();
private:
    int num;
    char name[20];
    char sex;
};

#endif
