#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

int main()
{
    sayHi("Carlos", 24);
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << ". you are " << age;
}

