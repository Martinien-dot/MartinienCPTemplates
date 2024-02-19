#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int N = 2*n;
    long long ar[N];
    for(int i=0; i<n*2; i++){
        cin>>ar[i];
    }
    long long res = 0;
    sort(ar, ar+n*2);
    for(int i=0; i<n*2; i+=2){
        res+=ar[i];
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