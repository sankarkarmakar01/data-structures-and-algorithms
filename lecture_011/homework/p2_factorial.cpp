// find factorial

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int fact = 1;

    int i = 1;
    while (i <= num)
    {
        fact *= i;
        i++;
    }

    cout << "Factorial is: " << fact;

    return 0;
}