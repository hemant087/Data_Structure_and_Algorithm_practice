#include <bits/stdc++.h>
using namespace std;
int pivotNum(vector<int> &arr)
{
    int start = 0, end = arr.size();
    int mid = (end + start) / 2;
    while (start <= end)
    {
        if (arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }
        else if (arr[start] > arr[mid])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
        mid = (end + start) / 2;
    }
}
int targetElement(vector<int> &arr, int start, int end, int key)
{
    int mid = (end + start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (end + start) / 2;
    }
}
int main()
{
    vector<int> arr{11, 32, 45, 2, 4, 6, 8, 9};
    int key;
    cout << "Which number's index do you want to find : -  ";
    cin >> key;
    int pivot = pivotNum(arr);
    if (arr[0] <= key && arr[pivot] < key)
    {
        cout << "Your targeted element " << key << " index is : " << targetElement(arr, 0, (pivot - 1), key);
    }
    else
    {
        cout << "Your targeted element " << key << " index is : " << targetElement(arr, 3, 8, key);
    }
    return 0;
}