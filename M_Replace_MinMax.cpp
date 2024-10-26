#include<bits/stdc++.h>
using namespace std;
int main(){
    int nn;
    cin>>nn;
    int a[nn];
    int min=INT_MAX,min_i=-1;
    int max=INT_MIN,max_i=-1;
    for(int n=0;n<nn;n++){
        cin>>a[n];
        if(a[n]>max){ max=a[n];max_i=n;}    
        if(a[n]<min){
            min=a[n];
            min_i=n;
        }
        }
        swap(a[min_i],a[max_i]);
        for(int e:a){
            cout<<e<<" ";
        }

}