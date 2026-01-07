#include <iostream>
using namespace std;

int main() { // 标准写法建议用 int main
    int i, j, * pi, * pj;
    pi = &i;
    pj = &j;
    i = 5; j = 7;
    // 使用双引号 "\t" 或字符 '\t' 均可
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
    return 0;
}