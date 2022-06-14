#include <iostream>
using namespace std;
double digitValue(int num, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < 5; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
RootBinary(int num)
{
    int start = 0, end = num;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        int sqRoot = mid * mid;
        if (sqRoot < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int temp = RootBinary(num);
    // cout << temp << endl;
    cout << "Your sq : " << digitValue(num, temp);
    return 0;
}