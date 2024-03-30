#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a<b && b<c){
        cout<<"STAIR"<<endl;
    }
    else if(a<b && b>c){
        cout<<"PEAK"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
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