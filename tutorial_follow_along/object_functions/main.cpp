#include <iostream>
#include <cmath>

using namespace std;
/*
 *
 * You cannot use the same variable names in the constructor like in python
 */

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        bool hasHonors() {
            if (gpa >= 3.5) {
                return true;
            }
            return false;
        }
    };

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);
    if (student1.hasHonors()) {
        cout << student1.name << " has honors";
    }
    if (student2.hasHonors()) {
        cout << student2.name << " has honors";
    }

    return 0;
}

