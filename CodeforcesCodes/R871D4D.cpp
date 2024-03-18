#include<bits/stdc++.h>
using namespace std;

bool fct(int n, int m){
    if(n<m)
        return false;
    if(n==m)
        return true;
    if(n%3!=0)
        return false;
    if(fct(n/3, m))
        return true;
    if(fct((n/3)*2, m))
        return true;
    return false;
}
void solve(){
    int n;
    int a,b;
    cin>>a>>b;
    if(fct(a, b)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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