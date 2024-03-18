#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin>>n;
    int temp;
    int res =0;
    for(int i=0; i<n; i++){
        cin>>temp;
        res+=abs(temp);
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