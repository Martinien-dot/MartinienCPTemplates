#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int n;
    cin>>n;
    string l1, l2;
    cin>>l1;
    cin>>l2;
    int i=1;
    int aide=1;
    while(i<n && (l2[i-1]=='1')){
        if(l1[i]==l2[i-1]){
            aide++;
            while(i<n && l1[i]==l2[i-1]){
                i++;
            }
        }
        i++;
    }
    if(i>=n){
        i=n-1;
    }
    string res = l1.substr(0, i) + l2.substr(i-1, n-i+1);
    cout<<res<<endl;
    cout<<aide<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}