// square root by using binary search,,(output will be only in integer)
#include<iostream>
using namespace std;
int squareRoot(int num)
{
    int start=0,end=num;
    int mid=start+(end-start)/2;
    int ans;
    while(start<=end)
    {
        int sq= mid*mid;
        if(num==sq)
        {
            return mid;
        }
        else if(num>sq)
        {
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"This is your Square Root : "<<squareRoot(num);
    return 0;
}
