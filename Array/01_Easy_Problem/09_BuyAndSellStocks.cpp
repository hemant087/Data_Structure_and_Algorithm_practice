#include <iostream>

using namespace std;

int maxProfit(int a[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] > a[i - 1])
            profit = profit + (a[i] - a[i - 1]);
    }
    return profit;
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
    cout << "Max Profit :" << maxProfit(a, n);

    return 0;
}