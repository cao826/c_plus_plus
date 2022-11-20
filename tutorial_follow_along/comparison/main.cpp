#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

double getMax(int num1, int num2){
    int result;
    if (num1 > num2){
        result = num1;
    } else {
    result = num2;
    }
    return result;
}

int main()
{
    cout << getMax(3, 7);
}
