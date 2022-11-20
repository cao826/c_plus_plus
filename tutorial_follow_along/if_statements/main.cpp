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
    bool isMale = true;
    bool isTall = true;
    if (isMale || isTall){
        cout << "You are a tall male";
    } else if (isMale && !isTall){
        cout << "You are male, but you are not tall";
    }
    else if (!isMale && isTall){
        cout << "You are tall, but you are not male";
    }
    else {
        cout << "You are not male";
    }
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << ". you are " << age;
}

