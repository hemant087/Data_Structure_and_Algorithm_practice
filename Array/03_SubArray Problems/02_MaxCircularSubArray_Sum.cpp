#include <iostream>

using namespace std;

int max_sum(int a[], int n) // Simple Kadane's Algo
{
    int res = a[0];
    int maxEnd = a[0];
    for (int i = 1; i < n; ++i)
    {
        maxEnd = max(maxEnd + a[i], a[i]);
        res = max(res, maxEnd);
    }
    return res;
}

int max_Cir(int a[], int n)
{
    // Normal Sum
    int max_Normal = max_sum(a, n); // First find Max Simple subArray Sum
    if (max_Normal < 0)
        return -1;

    // circular Sum
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum = arrSum + a[i];
        a[i] = -a[i]; // Inverting the array
    }
    int max_Circular = max_sum(a, n) + arrSum;
    return max(max_Circular, max_Normal);
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
    cout << "Max Circular Subarray Sum : " << max_Cir(a, n);
    return 0;
}