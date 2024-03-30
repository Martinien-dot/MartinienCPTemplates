#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int a, b, l;
    cin>>a>>b>>l;
    int temp;
    long long int res = 0;
    for(int i=0; i<=20; i++){
        for(int j=0; j<=20; j++){
            temp = pow(a, i) * pow(b, j);
            if(l%temp==0){
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