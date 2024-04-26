#include <iostream>

using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
string getType(int num);

int main() {
    int choice, num1, num2;

    while (true) {
        cout << "Select operation:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program..." << endl;
            break; 
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1: {
                int result = add(num1, num2);
                cout << num1 << " + " << num2 << " = " << result << endl;
                cout << getType(num1) << " + " << getType(num2) << " = " << getType(result) << endl;
                break;
            }
            case 2: {
                int result = subtract(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
                cout << getType(num1) << " - " << getType(num2) << " = " << getType(result) << endl;
                break;
            }
            case 3: {
                int result = multiply(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
                cout << getType(num1) << " * " << getType(num2) << " = " << getType(result) << endl;
                break;
            }
            case 4: {
                if (num2 != 0) {
                    float result = divide(num1, num2);
                    cout << num1 << " / " << num2 << " = " << result << endl;
                    cout << getType(num1) << " / " << getType(num2) << " = " << getType(result) << endl;
                } else {
                    cout << "Cannot divide by zero!" << endl;
                }
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return static_cast<float>(a) / b;
}

string getType(int num) {
    if (num % 2 == 0 && num > 0)
        return "(Even; Positive;)";
    else if (num % 2 != 0 && num > 0)
        return "(Odd; Positive;)";
    else if (num % 2 == 0 && num < 0)
        return "(Even; Negative;)";
    else if (num % 2 != 0 && num < 0)
        return "(Odd; Negative;)";
    else
        return "(Zero;)";
}
