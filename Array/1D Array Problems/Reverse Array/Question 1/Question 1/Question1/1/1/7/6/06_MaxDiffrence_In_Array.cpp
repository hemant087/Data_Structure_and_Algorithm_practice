// maximum difference b/w arrays in ascending order
//  example arr[]={2,3,4,5,9}==> output will be (9-2)=7
// arr[]={30,4,8,10}==> output will be (10-4)=6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, *arr;
    cout << " Size : - ";
    cin >> size;
    arr = new int[size];
    cout << "elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // max difference
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int x = i + 1; x < size; x++)
        {

            if (temp < arr[x] - arr[i])
            {
                temp = arr[x] - arr[i];
            }
            else if (arr[x] - arr[i] < 0)
            {
                i = x;
            }
        }
    }
    cout << endl;
    cout << "max benefits :- " << temp;
    return 0;
}