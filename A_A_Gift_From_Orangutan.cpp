#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n),c(n);
        for(auto& e:a){
            cin>>e;
        }
        sort(a.rbegin(), a.rend());
        b=a;
        sort(a.begin(),a.end());
        c=a;
        int score = 0;

        int min_val = c[0];
        int max_val = b[0];
        for (int i = 1; i < n; ++i)
        {
            
            min_val = min(min_val, c[i]);
            max_val = max(max_val, b[i]);

            score += max_val - min_val;
        }

        cout << score << endl;
    }
    
    return 0;
}