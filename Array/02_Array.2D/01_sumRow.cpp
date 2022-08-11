#include <iostream>
using namespace std;

int RowSum(int arr[][3])
{
    cout<<endl<<"Row's wise sum   "<<endl<<endl;
    for (int x = 0; x < 3; x++)
    {
        int temp = 0;
        for (int y = 0; y < 3; y++)
        {
            temp = temp + arr[x][y];
            cout << arr[x][y] << "  ";
        }
        cout << " |=> " << temp << "  ";
        cout << endl;
    }
}

int columSum(int arr[][3])
{
    cout<<endl<<"colum's wise sum   "<<endl<<endl;
     for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout <<" "<< arr[x][y] << "   ";
        }
        cout << endl;
    } 
    cout<<"----------------"<<endl;
    for (int x = 0; x < 3; x++)
    {
        int temp = 0;
        for (int y = 0; y < 3; y++)
        {
            temp = temp + arr[y][x];
        }
        cout << " "<<temp << "  ";
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Row wys sum
    RowSum(arr);

    // colum wys sum
    columSum(arr);

    return 0;
}