#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{12,34,5,6,7455,4,87,467,343};
    int num,target;
    cout<<"Enter the targeted number :-  ";
    cin>>num;
    for(int i=0;i<arr.size();i++)
    {
        if(num==arr[i])
        {
           target=i;
        }
    }
    int last=arr.size()-1;
    for (int i = target; i <= last; i++)
    {
        swap(arr[i], arr[last]);
        last--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}