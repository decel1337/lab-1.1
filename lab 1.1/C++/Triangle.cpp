#include "Triangle.h"
#include <sstream>
#include <iomanip>
#include <cmath>

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {
}
double Triangle::calculatePerimeter() const {
    // Обчислюємо сторони трикутника
    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    return side1 + side2 + side3;
}
double Triangle::calculateArea() const {
    // Використовуємо формулу площі через координати вершин
    double area = 0.5 * abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
    return area;
}
std::string Triangle::toString() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "Трикутник з вершинами: ";
    oss << "A(" << x1 << ", " << y1 << "), ";
    oss << "B(" << x2 << ", " << y2 << "), ";
    oss << "C(" << x3 << ", " << y3 << ")";
    return oss.str();
}