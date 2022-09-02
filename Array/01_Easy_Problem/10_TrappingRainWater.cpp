#include <iostream>

using namespace std;

int trapMax(int a[], int n)
{
    int trap = 0;
    int left[n];
    int right[n];
    left[0] = a[0];
    for (int i = 1; i < n; i++) // Left Max
    {
        left[i] = max(a[i], left[i - 1]);
    }
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) // Right Max
    {
        right[i] = max(a[i], right[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        trap = trap + (min(left[i], right[i]) - a[i]);
    }
    return trap;
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
    cout << "Max : " << trapMax(a, n);

    return 0;
}