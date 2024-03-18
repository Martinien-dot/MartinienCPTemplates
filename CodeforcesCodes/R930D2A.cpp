#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int n;
    cin>>n;
    int i=0;
    while(n>=2){
        i++;
        n = n/2;
    }
    cout<<(int)pow(2,i)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}