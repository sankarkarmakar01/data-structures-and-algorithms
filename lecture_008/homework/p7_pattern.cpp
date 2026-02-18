//         A
//       B B
//     C C C
//   D D D D
// E E E E E

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        char letter = 'A' + i - 1;
        for (int j = i; j >= 1; j--)
        {
            cout << letter;
        }
        cout << endl;
    }
    return 0;
}