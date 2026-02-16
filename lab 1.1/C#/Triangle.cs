using System;

namespace TriangleLab
{
    public class Triangle
    {
        private double x1, y1, x2, y2, x3, y3;
        // Конструктор
        public Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
        {
            this.x1 = x1;
            this.y1 = y1;
            this.x2 = x2;
            this.y2 = y2;
            this.x3 = x3;
            this.y3 = y3;
        }
        // Властивості для доступу до координат
        public double X1 { get { return x1; } }
        public double Y1 { get { return y1; } }
        public double X2 { get { return x2; } }
        public double Y2 { get { return y2; } }
        public double X3 { get { return x3; } }
        public double Y3 { get { return y3; } }
        // Метод обчислення периметра
        public double CalculatePerimeter()
        {
            double side1 = Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));
            double side2 = Math.Sqrt(Math.Pow(x3 - x2, 2) + Math.Pow(y3 - y2, 2));
            double side3 = Math.Sqrt(Math.Pow(x1 - x3, 2) + Math.Pow(y1 - y3, 2));

            return side1 + side2 + side3;
        }
        // Метод обчислення площі
        public double CalculateArea()
        {
            double area = 0.5 * Math.Abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
            return area;
        }
        // Метод для отримання рядкового представлення
        public override string ToString()
        {
            return $"Трикутник з вершинами: A({x1:F2}, {y1:F2}), B({x2:F2}, {y2:F2}), C({x3:F2}, {y3:F2})";
        }
    }
}