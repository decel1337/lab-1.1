#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include <string>

class Triangle {
private:
    double x1, y1, x2, y2, x3, y3;

public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
    // Методи доступу до координат
    double getX1() const { return x1; }
    double getY1() const { return y1; }
    double getX2() const { return x2; }
    double getY2() const { return y2; }
    double getX3() const { return x3; }
    double getY3() const { return y3; }
    // Методи обчислення
    double calculatePerimeter() const;
    double calculateArea() const;

    // Метод для отримання інформації про трикутник
    std::string toString() const;
};

#endif