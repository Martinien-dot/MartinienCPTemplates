#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<tuple<int, int, int>> adj;
    for(int i=0; i<k; i++){
        int a, b, c;
        cin>>a>>b>>c;
        adj.push_back({a, b, c});
    }
    vector<int>res;
    int aide[n+1];
    for(int i=0; i<=n+1; i++){
        aide[i] = 1000;
    }
    aide[1] = 0;
    for(int i=1; i<n; i++){
        for(auto e:adj){
            int a, b, c;
            tie(a, b, c) = e;
            aide[b] = min(aide[b], aide[a]+c);
        }
    }
    for(int i=1; i<=n; i++){
        cout<<aide[i]<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}