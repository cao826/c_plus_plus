#include <iostream>
#include <cmath>

using namespace std;
/*
 *
 * You cannot use the same variable names in the constructor like in python
 */

class Book {
    public:
        string title = "No Title";
        string author = "No Author";
        int pages = 0;
        Book(string atitle, string aauthor, int apages) {
            title = atitle;
            author = aauthor;
            pages = apages;
        }
    };

int main()
{
    Book book1("Fluent Python", "Our lord and savior", 667);

    cout << book1.title;
    return 0;
}

