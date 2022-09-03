#include <iostream>

using namespace std;

bool equiPoint(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = sum + a[i]; // First find all sum
    }
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (leftSum == sum - a[i]) // check for left and right of a[i]
            return true;
        leftSum = leftSum + a[i]; // add a[i] to left
        sum = sum - a[i];         // remove a[i] from right
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    if (equiPoint(a, n))
        cout << "Exist";
    else
        cout << "Not Exist";
    return 0;
}