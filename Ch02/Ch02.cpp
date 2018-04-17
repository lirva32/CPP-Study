//while, do-while, ++ in while, break, continue, fstream

/*
Prompts name, score from text file.
Prompts sum of the scores.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string text;
    fstream inputStream;
    int num = 0;
    int sum = 0;

    inputStream.open("scoreBoard.txt");

    while(inputStream >> text)
    {
        cout << text << " ";
        num++;

        if (num%2 == 0)
        {
            sum += std::stoi(text);
            cout << endl;
        }
            
    }

    inputStream.close();

    cout << "\nsum of the scores: " << sum << endl;

    return 0;
}


