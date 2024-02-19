#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int val = 1;
    for(int i = 0; i < n; i+=2) p[i] = val++;
    for(int i = (n&1 ? n-2 : n-1); i > 0; i-=2) p[i] = val++;
    
    
    for(auto e: p) cout << e  <<" ";
    cout <<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}