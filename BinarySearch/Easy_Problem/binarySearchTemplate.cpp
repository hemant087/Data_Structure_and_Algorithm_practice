#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target)
{
    int start=0,end=size-1;
    int mid=(start+end)>>1; //we can also use-- start + (end-start)/2; or --(start+end)/2;
    while(start<=end)
    {
        if(target==arr[mid])
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;    // return if you not found targeted
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int target;
    cout<<"Enter the targeted element : ";
    cin>>target;
    cout<<"This is your targeted element index :  "<<binarySearch(arr,7,target);
    return 0;
}