// input arr[]={1234};
// output 1 3 6 10 {(1) (1+2) (1+2+3) (1+2+3+4)}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        ans.push_back(arr[i] + count);
        count = ans[i];
    }
    // output
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << ans[i]<<"  ";
    }
    return 0;
}