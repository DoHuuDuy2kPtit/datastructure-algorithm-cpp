#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    // long long t; cin>>t;
    // while(t--){
        // long long mark;
        cin>>len; for(int i=1;i<=len;i++){
            cin>>a[i];
        }
        for(int i=1;i<len;i++){
            int MIN=INT_MAX,index=i;
            for(int j=i+1;j<=len;j++){
                if(a[j]<MIN){
                    MIN=a[j];
                    index=j;
                }
            }
            swap(a[i],a[index]);
            cout<<"Buoc "<<i<<": ";
            for(int i=1;i<=len;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        // cout<<mark<<endl;
    // }
}