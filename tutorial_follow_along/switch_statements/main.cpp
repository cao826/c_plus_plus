#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

string toDayOfWeek(int dayCode){
    string dayName;
    switch (dayCode) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid day code";
        
    }
    return dayName;
}

int main()
{
    cout << "It is:  " << toDayOfWeek(6);
    return 0;
}

