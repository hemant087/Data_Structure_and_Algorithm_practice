#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1, 3, 2, 4};
  vector<int> v;
  stack<int> s;
  for (int i = 3; i >= 0; i--)
  {
    if (s.size() == 0)
    {
      v.push_back(-1);
    }
    else if (s.size() > 0 && arr[i] < s.top())
    {
      v.push_back(arr[i]);
    }

    if (s.size() > 0 && arr[i] < s.top())
    {
      while (s.size() > 0 && arr[i] <s.top())
      {
        cout<<arr[i]<<"  ";
        s.pop();
      }
      if (s.size() == 0)
      {
        v.push_back(-1);
      }
      else
      {
        v.push_back(s.top());
      }
      s.push(arr[i]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    cout << v[i];
  }
}