#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int res = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        res+=arr[i]>0?arr[i]:-arr[i];
    }
    cout<<res<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}