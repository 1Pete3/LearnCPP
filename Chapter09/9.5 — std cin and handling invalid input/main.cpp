#include <iostream>
#include <cstdlib>
#include <limits>

void ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction() {
    if (!std::cin) {
        if (std::cin.eof()) {
            exit(0);
        }
        std::cin.clear();
        ignoreLine();
        return true;
    }
    return false;
}

double getDouble() {
    while (true) {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (clearFailedExtraction()) {
            std::cout << "Oops, that input is invalid. Please try again. \n";
            continue;
        }
        ignoreLine();
        return x;
    }
}

char getOperator() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char operation{};
        std::cin >> operation;

        if (!clearFailedExtraction()) {
            ignoreLine();
        }
        switch (operation) {
        case '+':
        case '-':
        case '*':
        case '/':
            return operation;
        default:
            std::cout << "Oops, that input is invalid. Please try again.\n";
        }
    }
}

void printResult(double x, char operation, double y) {
    std::cout << x << ' ' << operation << ' ' << y << " is ";

    switch (operation) {
    case '+':
        std::cout << x + y << std::endl;
        return;
    case '-':
        std::cout << x - y << std::endl;
        return;
    case '*':
        std::cout << x * y << std::endl;
        return;
    case '/':
        if (y == 0) {
            break;
        }
        std::cout << x / y << std::endl;
        return;
    }
    std::cout << "???\n";
}

int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    while (operation == '/' && y == 0.0) {
        std::cout << "The denominator cannot be zero. Try again\n";
        y = getDouble();
    }
    printResult(x,operation, y);
    return EXIT_SUCCESS;
}
