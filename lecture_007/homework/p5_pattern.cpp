// A
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int count = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << char(count) << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}