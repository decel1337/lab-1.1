#include <iostream>
#include "Triangle.h"

int main() {
    // Створюємо об'єкт трикутника
    Triangle triangle(0, 0, 3, 0, 0, 4);
    // Виводимо інформацію про трикутник
    std::cout << triangle.toString() << std::endl;
    // Обчислюємо та виводимо периметр
    double perimeter = triangle.calculatePerimeter();
    std::cout << "Периметр трикутника: " << perimeter << std::endl;
    // Обчислюємо та виводимо площу
    double area = triangle.calculateArea();
    std::cout << "Площа трикутника: " << area << std::endl;

    return 0;
}