// compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring> // prototype for strcmp()
int main()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        //cout << "the compare result: " << strcmp(word, "mate") << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}
