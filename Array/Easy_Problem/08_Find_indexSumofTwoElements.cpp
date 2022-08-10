// Input: 4
//        2 7 11 15 
//        9
// Output: [0,1]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
// Input: 3
//        2 3 4
//        6
// Output: [0,2]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr,size,sum;
    cout<<"Size :-  ";
    cin>>size;

    arr= new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum of two elements :  ";
    cin>>sum;
    for(int x=0;x<size;x++)
    {
        for(int y=x+1;y<size;y++)
        {
            if(sum==arr[x]+arr[y])
            {
                cout<<"[ "<<x<<" , "<<y<<" ]";
                break;
            }
        }
    }
    return 0;
}