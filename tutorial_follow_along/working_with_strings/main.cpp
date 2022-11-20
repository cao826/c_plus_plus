#include <iostream>

using namespace std;

int main()
{
    string phraseSub;
    string phrase = "Giraffe Academy";
    cout << phrase.length();
    phrase[0] = 'P';
    phraseSub = phrase.substr(8, 3);
    cout << phrase.find("affe", 2) << endl;
    cout << phraseSub << endl;
    cout << phrase[0] << endl;
    return 0;
}
