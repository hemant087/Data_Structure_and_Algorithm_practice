#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, *arr;
    cout << " Size : - ";
    cin >> size;
    arr = new int[size];
    cout << "elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int index = 1;
    // check duplicate
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[index] = arr[i + 1];
            index++;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < index-1; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
// static int[] solve(int n, int[] arr)
// {
//     CODE HERE int index = 1;
//     for (int i = 0; i < arr.length - 1; i)
//     {
//         if (arr[i] != arr[i + 1])
//         {
//             arr[index] = arr[i + 1];
//             index;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     int newArr = new int[index];
//     for (int i = 0; i < index; i++)
//     {
//         newArr[i] = arr[i];
//     }
//     return newArr;
// }