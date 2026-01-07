#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

void Student::set_value(int n, const char* s, char g) {
    num = n;
    strncpy(name, s, 19);
    name[19] = '\0';
    sex = g;
}

void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}