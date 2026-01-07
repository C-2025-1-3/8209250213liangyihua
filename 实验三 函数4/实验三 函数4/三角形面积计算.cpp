#include "mytriangle.h"
#include <cmath>

bool is_valid(double side1, double side2, double side3) {
    // 任意两边之和大于第三边
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}

double double_area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2.0;
    // 海伦公式: $Area = \sqrt{s(s-a)(s-b)(s-c)}$
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}