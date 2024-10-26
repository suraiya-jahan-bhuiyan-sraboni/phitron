#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long  n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        long long subtract = 0;
        long long answer = k;

        for (long long i = 0; i < n; i++)
        {
            a[i] -= subtract;
            k -= min(k, (n - i) * a[i]);

            if (k == 0) break;
            else answer++;

            subtract += a[i];
        }

        cout << answer << "\n";
    }

    return 0;
}
