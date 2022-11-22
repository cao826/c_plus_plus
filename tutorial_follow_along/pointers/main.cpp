#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    string name = "Mike";
    cout << *pAge;
    return 0;
}

