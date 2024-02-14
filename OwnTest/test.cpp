#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin>>a>>b;
    int mx = max(a, b);
    int mn = min(a, b);
    if(mx%2==0){
        if(mn%2==1 && mx==2*mn){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    else if(mn%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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