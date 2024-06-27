#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int inputHours;
int inputMinutes;
int inputSeconds;

int twelveHourClock()
{
    if (inputHours == 0) {
        return 12;
    }

    if (inputHours <= 12)
    {
        return inputHours;
    }
    else
    {
        return inputHours - 12;
    }
}

string AMPM()
{
    if (inputHours < 12)
    {

        return "AM";
    }

    else {
        return "PM";
    }
}

int main()
{

    cin >> inputHours >> inputMinutes >> inputSeconds;
    int i = 1;

    while (i <= 27) {
        cout << '*';
        i++;
    }
    cout << endl;
    cout << '*' << "      12 Hour Clock      " << '*' << endl;
    cout << setfill('0') << setw(2) << "*      " << twelveHourClock() << ':';
    cout << setfill('0') << setw(2) << inputMinutes << ':';
    cout << setfill('0') << setw(2) << inputSeconds << AMPM() << "         " << '*' << endl;


    i = 1;
    while (i <= 27) {
        cout << '*';
        i++;
    }
    cout << endl;

    cout << '*' << "      24 Hour clock      " << '*' << endl;
    cout << setfill('0') << setw(2) << "*      " << inputHours % 24 << ':';
    cout << setfill('0') << setw(2) << inputMinutes << ':';
    cout << setfill('0') << setw(2) << inputSeconds << "           " << '*' << endl;

    while (i <= 27) {
        cout << '*';
        i++;
    }


    cout << endl;
    i = 1;


    while (i <= 27)
    {
        cout << "*";
        i++;
    }
    cout << endl;
    i = 1;

    cout << '*' << " 1-Add One Hour" << setfill(' ') << setw(10) << " " << '*' << endl;
    cout << '*' << " 2-Add One Minute" << setw(8) << " " << '*' << endl;
    cout << '*' << " 3-Add One Second" << setw(8) << " " << '*' << endl;
    cout << '*' << " 4-Exit Program" << setw(10) << " " << '*';

    cout << endl;
    while (i <= 27) {
        cout << '*';
        i++;
    }

    cout << endl;
    int menu;
    cin >> menu;



    switch (menu)
    {

    case (1):

        inputHours = (inputHours + 1) % 24;

        break;

    case(2):

        inputMinutes = inputMinutes + 1;

        if (inputMinutes >= 60)
        {
            inputMinutes = 0;
            inputHours = (inputHours + 1) % 24;

        }

        break;

    case (3):

        inputSeconds = inputSeconds + 1;

        if (inputSeconds >= 60)
        {
            inputSeconds = 0;
            inputMinutes = inputMinutes + 1;

            if (inputMinutes >= 60)
            {
                inputMinutes = 0;
                inputHours = (inputHours + 1) % 24;
            }





        }

        break;

    case (4):

        cout << "exiting program" << endl;
        break;


    default:
        break;

    }
    i = 1;

    while (i <= 27) {
        cout << '*';
        i++;
    }
    cout << endl;
    cout << '*' << "      12 Hour Clock      " << '*' << endl;
    cout << setfill('0') << setw(2) << "*      " << twelveHourClock() << ':';
    cout << setfill('0') << setw(2) << inputMinutes << ':';
    cout << setfill('0') << setw(2) << inputSeconds << AMPM() << "          " << '*' << endl;

    i = 1;

    while (i <= 27) {
        cout << '*';
        i++;
    }
    cout << endl;

    cout << '*' << "      24 Hour clock      " << '*' << endl;
    cout << setfill('0') << setw(2) << "*      " << inputHours % 24 << ':';
    cout << setfill('0') << setw(2) << inputMinutes << ':';
    cout << setfill('0') << setw(2) << inputSeconds << "           " << '*' << endl;


    i = 1;


    while (i <= 27)
    {
        cout << "*";
        i++;
    }
    cout << endl;

}
