//while, ++ in while, break, continue, fstream

/*
Prompts name, score from text file.
Prompts sum of the scores.

미완성입니다.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string text;
    string filePath = "scoreBoard.txt";
    fstream inputStream;
    int num = 0;
    int sum = 0;

    string name;
    int score;

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

    cout << "\nsum of the scores: " << sum << endl;
    
//    ofstream writeFile(filePath.data());

    num = 0;

    do
    {
        cout << "name: ";
        cin >> name;
        
        cout << "score: ";
        cin >> score;

        inputStream << name << " " << score;
    }while(num++ < 3);

    inputStream.close();

    return 0;
}


