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

    //  Kadane's Algo   time compl = O[n]

    int Curr_sum = 0;
    for (int i = 0; i < size; i++)
    {
        Curr_sum += arr[i];
        if (maxSum < Curr_sum)
        {
            maxSum = Curr_sum;
        }
        if (Curr_sum < 0)
        {
            Curr_sum = 0;
        }
    }
    cout << "\n Your maximum sum of sub-array is :   " << maxSum;
    return 0;
}




    // brute force approach ,,,,,,,,,,,,,,time comp=O[n^3]

    // for (int x = 0; x < size; x++)
    // {
    //     for (int y = x; y < size; y++)
    //     {
    //         int sum = 0;
    //         for (int z = x; z < y + 1; z++)
    //         {
    //             sum += arr[z];
    //         }
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // Cumulative sum approach ,,,,,,,,,,,,,,time comp=O[n^2]

    // int cumSum[size + 1];
    // cumSum[0] = 0;
    // for (int i = 1; i < size + 1; i++)
    // {
    //     cumSum[i] = cumSum[i - 1] + arr[i - 1];
    // }

    // for (int x = 1; x < size + 1; x++)
    // {
    //     int sum = 0;
    //     for (int y = 0; y < x; y++)
    //     {
    //         sum = cumSum[x] - cumSum[y];
    //         maxSum = max(maxSum, sum);
    //     }
    // }