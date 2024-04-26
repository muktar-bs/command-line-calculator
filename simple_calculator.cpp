#include <iostream>

using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero\n";
        return 0;
    }
    return a / b;
}

double multiply(double x, double y) {
    return x * y;
    
}
double substraction(double x, double y)
{
    return max(x, y)-min(x, y);
}
double addition( double num1, double num2){
    return num1+num2;
}
int main() {
    char operation;
    double operand1,operand2;
    cin>>operation>>operand1>>operand2;

    double result;
    switch (operation) {
        case '+':
            result = addition(operand1, operand2);
            break;
        case '-':
            result = substraction(operand1, operand2);
            break;
        case '*':
            result = multiply(operand1, operand2);
            break;
        case '/':
            result = divide(operand1, operand2);
            break;
        default:
            cerr << "Error: Invalid operation\n";
            return 1; 
    }

    cout << "Result: " << result << endl;
    return 0;
}