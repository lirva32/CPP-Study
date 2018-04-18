//const, int, string, double, if-else, cout, cin

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const double RATE = 2.8;
    double deposit;
    double money1yearlater;
    string name;
    

    cout << "Hello! What's your name? ";
    cin >> name;

    cout << "\nInterest rate is " << RATE << "%" << endl;
    cout << "How much do you want to deposit? $";
    cin >> deposit;

    money1yearlater = deposit*(1 + RATE/100);

    if (deposit > 10000)
        cout << "\nSorry, you cannot deposit that large amount of money." << endl;
    else
        cout << "\n" << name << ", your balance will be $"
        << money1yearlater << " after 1 year." << endl;

    return 0;
}