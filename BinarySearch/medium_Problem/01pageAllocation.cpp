#include <iostream>
using namespace std;
bool possibleSol(int arr[], int size, int stuNo, int barrier)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] + pageSum <= barrier)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > stuNo || barrier < arr[i])
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int pageAllocation(int arr[], int size)
{
    int totalPage = 0;
    for (int i = 0; i < size; i++)
    {
        totalPage += arr[i];
    }
    int start = 0, end = totalPage;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (possibleSol(arr, size, 2, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    cout << "This is your min : " << pageAllocation(arr, 4);
    return 0;
}