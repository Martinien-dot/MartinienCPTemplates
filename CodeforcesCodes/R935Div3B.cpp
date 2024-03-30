#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    long long a, b, m;
    cin>>a>>b>>m;
    long long res = 1;
    long long mn = min(a, b);
    long long mx = max(a, b);
    res = res + m/mn + m/mx;
    cout<<res+1<<endl;
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