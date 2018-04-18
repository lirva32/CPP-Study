//<cmath>: pow(), round(), floor()
//switch, char, global variables

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const double gravitational_constant = 6.67384 * pow(10, -11);
const double earth_mass = 5.972 * pow(10, 24);
const int earth_radius = 6371 * pow(10, 3);

char outputFormat();
void showForce(double m, char mode);

int main()
{
    double mass;;
    int force;
    char mode = outputFormat();
    
    cout << "mass of the object(kg) = ";
    cin >> mass;

    showForce(mass, mode);


    return 0;
}

char outputFormat()
{
    char input;

    do
    {
        cout << "To set output format, input a character according to following:\n" << "round: r / floor: f\n"
        << "\noutput format(r/f): ";
        cin >> input;
        cout << endl;
    } while(input != 'r' && input != 'f');

    return input;
}

void showForce(double m, char mode)
{
    double Force = (gravitational_constant*m*earth_mass) / (pow(earth_radius, 2));

    cout << "\nThe force applied to the object is ";

    switch (mode)
    {
        case 'r':
            cout << round(Force) << "N" << endl;
            break;
        case 'f':
            cout << floor(Force) << "N" << endl;
            break;
    }
}