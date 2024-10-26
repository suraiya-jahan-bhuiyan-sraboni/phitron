#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(auto&e:a){
            cin>>e;
        }
        for(int i=1;i<n/2;i++){
            if(a[i]==a[i-1] || a[n-i]==a[n-i-1]){
                swap(a[i],a[n-i-1]);
            }
        }
        int c=0;
        for(int i=1;i<n;i++){
            c+= a[i]==a[i-1];
        }
        cout<<c<<endl;
    }
}