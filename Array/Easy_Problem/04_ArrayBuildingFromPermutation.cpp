// input==> arr[]= {0,2,1,5,3,4};
// output==>  arr[arr[0]],arr[arr[1]],arr[arr[2]]....arr[arr[5]];
// final output==> 0,1,2,4,5,3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 2, 1, 5, 3, 4};

    vector<int> ans;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        ans.push_back(arr[arr[i]]);
    }
    // output
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << ans[i] << "  ";
    }
    return 0;
}
