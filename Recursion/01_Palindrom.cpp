#include <iostream>
#include <stdlib.h>

using namespace std;
bool search(string str, int s, int e)
{
    if (s >= e)
        return true;

    if (str[s] != str[e])
        return false;

    return search(str, s++, e--);
}

int main()
{
    system("CLS");
    string str;

    cin >> str;
    int n = str.size() - 1;

    int x = search(str, 0, n);

    if (x == 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}