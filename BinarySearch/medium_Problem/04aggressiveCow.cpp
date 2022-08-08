#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &arr, int mid, int cowCount)
{
    int num_cow = 1;
    int lastPosition = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            num_cow++;
            lastPosition = arr[i];
        }
    }
    if (num_cow >= cowCount)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    vector<int> arr{1, 2, 8, 4, 9};
    sort(arr.begin(), arr.end());
    int start = 0, end = arr[arr.size() - 1] - arr[0];
    int ans;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (isPossible(arr, mid, 3))
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout << "This is your max distance :  " << ans;
    return 0;
}