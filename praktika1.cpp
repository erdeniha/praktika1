#include <iostream>
#include <cmath>
void calculateRectangle(double length, double width, double &p, double &s, double &d) {
    p = 2 * (length + width);
    s = length * width;
    d = sqrt(length * length + width * width);
}

int main() {
    int choice;
    std::cout << "1. Прямоугольник" << std::endl;
    std::cout << "Выберите фигуру: ";
    
    if (!(std::cin >> choice)) {
        std::cerr << "Ошибка: введите число!" << std::endl;
        return 1;
    }

    switch (choice) {
        case 1: { 
            double x, y, p, s, d;
            std::cout << "Введите длину и ширину: ";
            if (std::cin >> x >> y && x > 0 && y > 0) {
                calculateRectangle(x, y, p, s, d);
                std::cout << "\nРезультаты Прямоугольника:" << std::endl;
                std::cout << "Периметр: " << p << "\nПлощадь: " << s << "\nДиагональ: " << d << std::endl;
            } else {
                std::cerr << "Ошибка: стороны должны быть положительными числами!" << std::endl;
            }
            break;
        }
        default:
            std::cout << "Такого пункта в меню нет." << std::endl;
            break;
    }

    return 0;
}