
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(auto& e:s){
        if(e==','){
            e=' ';
        }else if(islower(e)){
            e=toupper(e);
        }else if(isupper(e)){
            e=tolower(e);
        }
    }
    cout<<s<<endl;
}