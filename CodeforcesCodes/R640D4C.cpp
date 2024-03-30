#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    long long n,  m;
    cin>>n>>m;
    ll quo = m/(n-1);
    ll rest = m%(n-1);
    if(rest!=0){
        cout<<quo*n + rest<<endl;
    }
    else{
        cout<<quo*n - 1<<endl;
    }
}

int main(){
    sttt;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}