// Make a calculator using switch case (add, subtract, multiply, divide, modulus).

// Take a number (1–7) and print the corresponding day of the week using switch.

// Take a number (1–12) and print the corresponding month name using switch.

// Menu-driven program


#include<iostream>
using namespace std;

void question1() {
    char calculus;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> calculus;

    switch (calculus) {
        case '+': {
            int sum = a + b;
            cout << "Sum is: " << sum << endl;
            break;
        }
        case '*': {
            int mult = a * b;
            cout << "Multiplication is: " << mult << endl;
            break;
        }
        case '/': {
            if (b != 0) {
                int div = a / b;
                cout << "Division is: " << div << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        }
        case '-': {
            int diff = a - b;
            cout << "Difference is: " << diff << endl;
            break;
        }
        default:
            cout << "Invalid operator!" << endl;
    }
}

int main() {
    question1();
    return 0;
}
