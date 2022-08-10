#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {9, 83, 2, 46, 4, 59, 8, 34, 7, 50};
    int last = 9;
    for (int i = 0; i <= last; i++)
    {
        swap(arr[i], arr[last]);
        last--;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}