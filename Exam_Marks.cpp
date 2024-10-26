#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset_sum(int n, int a[], int s)
{
    if (s == 0)
        return true;
    if (n == 0)
        return false;

    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n; 
        int s;
        cin >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        memset(dp, -1, sizeof(dp));
        int sum = 1000 - s;
        if (sum < 0)
        { 
            cout << "NO" << endl;
            continue;
        }
        if (subset_sum(n, a, sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}