#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int res = a;
    res  = res+b/3;
    b%=3;
    if((b==1 && c<2) || (b==2 && c<1)){
        cout<<-1<<endl;
        return;
    }
    else{
        if(b>0){
            res++;
            c = c-(3-b);
        }
        res = res+c/3;
        c%=3;
        res = res + c/2;
        c%=2;
        res+=c;
        cout<<res<<endl;
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