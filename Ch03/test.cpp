#include <iostream>
using namespace std;

int main()
{
    char a[10];
    for (int i = 0; i < 10; i++) a[i] = 0;

    cin >> a;

    for (int i = 0; i < 10; i++) cout << "a[" << i << "] = " << a[i] << endl;
}