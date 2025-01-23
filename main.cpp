#include <iostream>
#include <cmath>    // For sqrt, pow, trigonometric functions
#include <limits>   // For handling invalid input

using namespace std;

void displayMenu() {
    cout << "Scientific Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Square Root\n";
    cout << "6. Exponentiation\n";
    cout << "7. Trigonometric Functions (sin, cos, tan)\n";
    cout << "8. Logarithm (log10, ln)\n";
    cout << "9. Factorial\n";
    cout << "0. Exit\n";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) return a / b;
    else {
        cout << "Error: Division by zero!\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}

double squareRoot(double a) {
    if (a >= 0) return sqrt(a);
    else {
        cout << "Error: Negative input for square root!\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}

double exponentiate(double base, double exponent) {
    return pow(base, exponent);
}

double sine(double angle) {
    return sin(angle * M_PI / 180);  // Convert angle to radians
}

double cosine(double angle) {
    return cos(angle * M_PI / 180);  // Convert angle to radians
}

double tangent(double angle) {
    return tan(angle * M_PI / 180);  // Convert angle to radians
}

double logarithm(double value) {
    if (value > 0) return log10(value);
    else {
        cout << "Error: Logarithm undefined for non-positive values!\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}

double naturalLogarithm(double value) {
    if (value > 0) return log(value);
    else {
        cout << "Error: Natural logarithm undefined for non-positive values!\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}

double factorial(int n) {
    if (n < 0) {
        cout << "Error: Factorial undefined for negative values!\n";
        return -1;
    }
    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    double num1, num2;
    int choice;
    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Square Root: " << squareRoot(num1) << endl;
                break;
            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << exponentiate(num1, num2) << endl;
                break;
            case 7:
                cout << "Enter angle (in degrees): ";
                cin >> num1;
                cout << "sin: " << sine(num1) << ", cos: " << cosine(num1) << ", tan: " << tangent(num1) << endl;
                break;
            case 8:
                cout << "Enter number for log10: ";
                cin >> num1;
                cout << "log10: " << logarithm(num1) << endl;
                cout << "Enter number for ln: ";
                cin >> num1;
                cout << "ln: " << naturalLogarithm(num1) << endl;
                break;
            case 9:
                cout << "Enter an integer for factorial: ";
                int n;
                cin >> n;
                cout << "Factorial: " << factorial(n) << endl;
                break;
            case 0:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
