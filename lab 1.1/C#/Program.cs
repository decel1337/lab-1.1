using System;

namespace TriangleLab
{
    class Program
    {
        static void Main(string[] args)
        {
            // Створюємо об'єкт трикутника
            Triangle triangle = new Triangle(0, 0, 3, 0, 0, 4);

            // Виводимо інформацію про трикутник
            Console.WriteLine(triangle.ToString());
            // Обчислюємо та виводимо периметр
            double perimeter = triangle.CalculatePerimeter();
            Console.WriteLine($"Периметр трикутника: {perimeter:F2}");
            // Обчислюємо та виводимо площу
            double area = triangle.CalculateArea();
            Console.WriteLine($"Площа трикутника: {area:F2}");

            // Чекаємо натискання клавіші перед закриттям
            Console.WriteLine("\nНатисніть будь-яку клавішу для виходу...");
            Console.ReadKey();
        }
    }
}