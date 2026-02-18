// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

#include <iostream>
using namespace std;
int main()
{
    int last_num;
    cout << "Enter the last number: ";
    cin >> last_num;

    cout << "For While:" << endl;
    int i = 1;
    while (i <= last_num)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    cout << "\n";
    cout << "For Do While:" << endl;
    i = 1;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= last_num);

    return 0;
}