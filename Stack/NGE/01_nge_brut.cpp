#include <bits/stdc++.h>
using namespace std;

int nge(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int next = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout<<next<<" ";
        // ans.push_back(next);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
}


int main()
{
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    nge(arr, n);
    return 0;
}