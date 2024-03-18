#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    int b[n];
    int c[m];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<m; i++){
        cin>>c[i];
    }
    int res =0;
    for(int i:b){
        for(int j:c){
            if(i+j<=k){
                res++;
            }
        }
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