// simple frequency mapping by there number
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[]={1,4,6,8,4,6,8,5,3,8,0,5,8,5,7,9,9,0,3,4,6,78,9,0,3,5,76,8,9,9,0,9,6,5,2,3,4,5,6,7,8,8,9,9,};
    map<int,int>m;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        m[arr[i]]++;
    }

    // printing elements and its frequency
    for(auto i:m)
    {
          cout<<i.first<<"==>"<<i.second<<endl;
    }
    return 0;
}