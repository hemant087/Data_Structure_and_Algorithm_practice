// find the index of an array,, whose sum is given
// example arr[]={1,2,3,4,5};
// input sum of two element (3+4)=7
// output will be 1 4 (2+5=7)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, *arr, sum;
    cout << "Enter the size of an array :- ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the elements of an array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum of two num : - ";
    cin >> sum;

    for (int x = 0; x < size; x++)
    {
        for (int y = x + 1; y < size; y++)
        {
            if (arr[x] + arr[y] == sum)
            {
                cout << x << "  " << y;
                return 0;
            }
        }
    }
    return 0;
}