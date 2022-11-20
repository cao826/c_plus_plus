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
    double answer = cubeNumber(5.0);
    cout << answer;
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << ". you are " << age;
}

