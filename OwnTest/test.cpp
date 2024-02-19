#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[] = {1, 2, 3, 4};
    swap(a[0], a[2]);
    cout<<a[0]<<endl;
    cout<<a[2]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}