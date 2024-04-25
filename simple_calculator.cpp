#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Usage: " << argv[0] << " <operation> <operand1> <operand2>\n";
        return 1;
    }

    char operation = argv[1][0];
    double operand1 = stod(argv[2]);
    double operand2 = stod(argv[3]);

    double result;
    switch (operation) {
        case '+':
            result = add(operand1, operand2);
            break;
        case '-':
            result = subtract(operand1, operand2);
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