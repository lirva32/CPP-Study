/*
<cstdlib>: srand(), rand(), exit()
<ctime>: time()
static_cast<>(), function, call-by-reference, overloading
*/
//미완성, exit() static_cast<>(), overloading 남음

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int getCipher(int number);
void initializer(int array[], const int size);
void numExtracter(int numCount[], const char repeat[]);
void printResult(int numCount[], const int size, const int repeat);
//char* infiniteComparison(char numArray1[], char numArray2[], const size);
//void infiniteSubtraction(char numArray1[], const size);

int main()
{
    const int countArraySize = 10; //숫자 0~9
    char substractionResult[numArraySize];
    int count[countArraySize];
    char repetition[numArraySize];
    string input;
    srand(time(NULL));
    
    initializer(count, countArraySize);
    initializer(substractionResult, numArraySize);

    while (true)
    {
        try
        {
            cout << "The number of repetition: ";
            cin >> input;
            const int numArraySize = input.length();
        }
        catch(int wrong)
        {
            cout << "Wrong Input!" << endl;
        }
    }

    numExtracter(count, repetition);
    printResult(count, arraySize, repetition);

    return 0;
}

int getCipher(int number)
{
    int cipher = 0;

    while(number != 0)
    {
        number /= 10;
        cipher += 1;
    }

    return cipher;
}

void initializer(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 0;
    }
}

void numExtracter(int numCount[], const char repeat[])
{
    for (; rea; )
    {
        int numExtracted = rand()%10;
        numCount[numExtracted] += 1;
    }
}

void printResult(int numCount[], const int size, const int repeat)
{
    cout << "\n\nThe number of a number appeared:\n" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << ": ";
        cout.width(getCipher(repeat) - 1);
        cout << numCount[i] << endl;
    }
}

/*
char* infiniteComparison(char numArray1[], const size)
{
    for (int i = size - 1; i >= 0;)
}
*/

void charSubtraction(char numArray1[], char result[], indexNow)
{
    if ((numArray1[indexNow] == 0) && (indexNow != 0))
    {
        result[indexNow] = 9;
        charSubtraction(numArray1[--indexNow]);
    }
    else
    {
        result[indexNow]--;
    }
}