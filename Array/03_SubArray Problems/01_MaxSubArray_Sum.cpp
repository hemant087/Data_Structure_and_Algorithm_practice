// Given an integer array nums, find the contiguous sub array (containing at least one number) which has the largest sum and return its sum.
// Input:
//     9
//     -2 1 -3 4 -1 2 1 -5 4
// Output:
//      6
// Explanation:
//     4 -1 2 1 has the largest sum = 6.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr, size, sum;
    cout << "Size :-  ";
    cin >> size;

    arr = new int[size];
    cout << "Enter the elements :  " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    for (int x = 0; x < size; x++)
    {
        for (int y = x; y < size; y++)
        {
            int sum = 0;
            for (int z = x; z < y + 1; z++)
            {
                sum += arr[z];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << "\n Your maximum sum of sub-array is :   " << maxSum;
    return 0;
}