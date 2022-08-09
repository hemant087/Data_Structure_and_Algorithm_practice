#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int x = 0; x < 3; x++)
    {

        if (x & 1) // it check odd number
        {
            for (int y = 2; y >= 0; y--)
            {
                cout << arr[x][y] << "  ";
            }
            cout << endl;
        }
        else
        {
            for (int y = 0; y < 3; y++)
            {
                cout << arr[x][y] << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}