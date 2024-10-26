#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool mak(ll n)
{
    if (n == 1)
        return true;

    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[1] = 1;

    for (ll i = 1; i <= n; i++)
    {
        if (dp[i])
        {
            if (i + 3 <= n)
                dp[i + 3] = 1;
            if (i * 2 <= n)
                dp[i * 2] = 1;
        }
    }

    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    ll input;
    while (t--)
    {
        cin >> input;
        bool flag = mak(input);
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}