/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<long long> b = a;
        sort(b.begin(), b.end(), greater<long long>());

        long long c[2];
        c[0] = b[0];
        c[1] = b[1];
        long long x, y;

        auto it = find(a.begin(), a.end(), c[0]);
        if (it != a.end())
        {
            x = it - a.begin();
        }
        auto itt = find(a.begin(), a.end(), c[1]);
        if (itt != a.end())
        {
            y = itt - a.begin();
        }
        if(x<y){
            cout<<x<<" "<<y<<endl;
        }else{
            cout << y << " " << x << endl;
        }
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long firstLargest = LLONG_MIN, secondLargest = LLONG_MIN;
        long long firstIndex = -1,secondIndex = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > firstLargest)
            {

                secondLargest = firstLargest;
                secondIndex = firstIndex;
                firstLargest = a[i];
                firstIndex = i;
            }
            else if (a[i] > secondLargest && a[i] != firstLargest)
            {
                secondLargest = a[i];
                secondIndex = i;
            }
        }
        if (firstIndex < secondIndex)
        {
            cout << firstIndex << " " << secondIndex << endl;
        }
        else
        {
            cout << secondIndex << " " << firstIndex << endl;
        }
    }
    return 0;
}