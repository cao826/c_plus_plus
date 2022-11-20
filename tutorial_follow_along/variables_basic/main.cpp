# include <iostream>

using namespace std;

int main()
{
    int characterAge = 70;
    string characterName = "John";

    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<< characterAge << " years old" << endl;
    characterName = "Xerxes the Great";
    cout << "He liked the name " << characterName << endl;
    cout << "But he did not like being "<< characterAge << endl;

    return 0;
}
