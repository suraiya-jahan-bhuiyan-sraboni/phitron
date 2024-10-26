#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a >= b)
            cout << a << "\n";
        else if (a < b)
        {
            long long x = b - a;
            if ((a - x) > 0)
            {
                cout << a - x << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
    }
    return 0;
}