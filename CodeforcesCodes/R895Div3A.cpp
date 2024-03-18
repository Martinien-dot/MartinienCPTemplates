#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int med = (a+b)/2;
    int res = (max(a, b)-med)/c;
    if((max(a, b)-med)%c!=0){
        res++;
    }
    cout<<res<<endl;
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