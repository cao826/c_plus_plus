#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

double cubeNumber(double number){
    double result = number * number * number;
    return result;
}

int main()
{
    int num1, num2;
    char op;
    int result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else {
        cout << "Invalid operator";
    }

    cout << "Result: " << result;

    return 0;
}

