#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int y = b / c * c;
    if(y >= a)
    {
        cout << y << "\n";
    }
    else
    {
         cout << -1 << "\n";
    }

    return 0;
}
