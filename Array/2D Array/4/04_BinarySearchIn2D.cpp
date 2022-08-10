#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[][4], int row, int colum, int target)
{
    int start = 0, end = row * colum - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int matrix = arr[mid / colum][mid % colum];
        if (target == matrix)
        {
            cout << "Row =>  " << mid /colum +1<< "   Colum =>  " << mid % colum+1;
            break;
        }
        else if (target > matrix)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    int arr[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            cout << arr[x][y] << "  ";
        }
        cout << endl;
    }
    int target;
    cout << "enter the target:  ";
    cin >> target;
    cout << endl;
    binarySearch(arr, 3, 4, target);
    return 0;
}