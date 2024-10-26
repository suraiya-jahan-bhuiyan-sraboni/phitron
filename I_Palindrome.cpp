#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int j=n-1;
    int f=0;
    for(int i=0;i<n/2;i++){
        if (/*i < j && */s[i] != s[j]){
            f=1;
        }
        j--;
    }
    if(f){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}