#include <iostream>
#include <cmath>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
    };

int main()
{
    Book book1;
    book1.title = "Fluent Python";
    book1.author = "Our lord and savior";
    book1.pages = 667;

    cout << book1.title;
    return 0;
}

