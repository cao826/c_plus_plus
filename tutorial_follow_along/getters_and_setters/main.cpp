#include <iostream>
#include <cmath>

using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            rating = aRating; 
        }
        bool isValidRating (string aRating) {
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R") {
                return true;
            }
            return false;
        }
        void setRating(string aRating) {
            if (isValidRating(aRating)) {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating() {
            return rating;
        }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("GIRLS GIRLS GIRLS");
    cout << avengers.getRating();

    return 0;
}

