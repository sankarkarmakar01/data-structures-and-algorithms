// Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.

#include <iostream>
using namespace std;
int main()
{
    float cel;
    cout << "Enter the temperature(In Cel.): ";
    cin >> cel;

    float fah = (cel * 9.0 / 5.0) + 32.0;

    if (fah > 70 && fah < 90)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}