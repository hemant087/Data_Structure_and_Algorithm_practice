#include<iostream>
using namespace std;
int pivotSearch(int arr[],int size)
{
    int start=0,end=size-1;
    int mid= start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid+1]<arr[mid])   // when mid>mid+1,,its obvious mid+1 is pivot,, 7>1
        {
            return mid+1;
            break;
        }        
        else if(arr[start]<arr[mid]) 
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return 0;
}

int main()
{
     int arr[7]={5,6,7,1,2,3,4};
    cout<<"Pivot element index :  "<<pivotSearch(arr,7);
    return 0;
}