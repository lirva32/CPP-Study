#include <iostream>
using namespace std;

int main()
{
    int numberOfLanguages;
    cout << "Hello! Welcome to C++ World!!" << endl;
    cout << "How many programming languages did you learn? ";
    cin >> numberOfLanguages;

    if (numberOfLanguages < 1)
        cout << "Sorry, you should learn at least one other language before studying C++" << endl;
    else
        cout << "Let's study together!" << endl;


    return 0;
}