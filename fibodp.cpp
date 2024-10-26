// Some code
#include <bits/stdc++.h>

using namespace std;
const long long N = 1e6 + 5;
long long dp[N];
long long fibo(long long n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fibo(n - 1) + fibo(n - 2);
    
}
int main()
{
    long long n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fibo(n) << endl;
    return 0;
}