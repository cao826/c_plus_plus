#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numberGrid[3][8] = {
        {1, 1, 2, 3, 5, 8, 13, 21},
        {1, 1, 2, 3, 5, 8, 13, 21},
        {2, 3, 43, 5, 4, 6, 3, 2}
    };
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 8; j++){
            cout << numberGrid[i][j] << endl;
        }
    }
    return 0;
}

