//
// Created by Yankee on 28.09.2026.
//

#include <iostream>
#include <cmath>

int square(int a, int b);
double dt(int b, double a, double c);
double x1(double a, double b, double x);
double x2(double a, double b, double x);

int main() {
    double one;
    double two;
    double three;
    int choice;

    std::cout << "******************************** NumHelper by Yankee *************************************\n";
    std::cout << "Choose the option (Pythagorean theorem - 1, Discriminant - 2, Find x1 - 3, Find x2 - 4): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter a: ";
            std::cin >> one;
            std::cout << "Enter b: ";
            std::cin >> two;
            std::cout << "Here's Your answer: " << square(one, two);
            break;
        case 2:
            std::cout << "Enter b: ";
            std::cin >> one;
            std::cout << "Enter a: ";
            std::cin >> two;
            std::cout << "Enter c: ";
            std::cin >> three;

            std::cout << "Here's Your answer: " << dt(one, two, three);
            break;
        case 3:
            std::cout << "Enter b: ";
            std::cin >> one;
            std::cout << "Enter discriminant: ";
            std::cin >> two;
            std::cout << "Enter c: ";
            std::cin >> three;

            std::cout << "Here's Your answer: " << x1(one, two, three);
            break;
        case 4:
            std::cout << "Enter b: ";
            std::cin >> one;
            std::cout << "Enter discriminant: ";
            std::cin >> two;
            std::cout << "Enter c: ";
            std::cin >> three;

            std::cout << "Here's Your answer: " << x2(one, two, three) << "\n";
            break;
    }
    std::cout << "*****************************************************************************************";
    return 0;
}

int square(int a, int b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

double dt(int b, double a, double c) {
    return pow(b,2) - 4 * a * c;
}

double x1(double b, double x, double a) {
    return (-b - sqrt(x)) / (2 * a);
}

double x2(double b, double x, double a) {
    return (-b + sqrt(x)) / (2 * a);
}