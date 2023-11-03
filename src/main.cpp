#include <iostream>
#include "Fraction/Fraction.h"


int main() {
    Fraction fractions[10];
    int index = 0;
    int offset = 5;

    do {
        std::cout
                << "=== Overloading Operator ===\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n\n";
        std::cout << "Choose one [1-4]\t: ";

        int choice;
        std::cin >> choice;

        Fraction result;
        switch (choice) {
            case 1: {
                std::cout << "=== Addition ===\n";
                result = fractions[index] + fractions[index + offset];

                std::cout << fractions[index] << " + " << fractions[index + offset] << " = " << result << std::endl;
                break;
            }

            case 2: {
                std::cout << "=== Subtraction ===\n";
                if (fractions[index] - fractions[index + offset] < 0) {
                    result = fractions[index + offset] - fractions[index];
                } else {
                    result = fractions[index] - fractions[index + offset];
                }
                std::cout << fractions[index] << " - " << fractions[index + offset] << " = " << result << std::endl;
                break;
            }

            case 3: {
                std::cout << "=== Multiplication ===\n";
                result = fractions[index] * fractions[index + offset];
                std::cout << fractions[index] << " * " << fractions[index + offset] << " = " << result << std::endl;
                break;
            }

            case 4: {
                std::cout << "=== Division ===\n";
                result = fractions[index] / fractions[index + offset];
                std::cout << fractions[index] << " / " << fractions[index + offset] << " = " << result << std::endl;
                break;
            }

            default:
                break;
        }
    } while (index++ < 5);

    return 0;
}