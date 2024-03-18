#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int a1 = 0;
    int a2 = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%3==1){
            a1++;
        }
        else if(a[i]%3==2){
            a2++;
        }
    }
    int res1 = abs(a1-a2);
    a1%=3;
    a2%=3;
    if(a1==a2){
        cout<<0<<endl;
    }
    else if(a1==2 && a2==0){
        cout<<1<<endl;
    }
    else if(a1==0 && a2==2){
        cout<<min(res1,2)<<endl;
    }
    else{
        cout<<abs(a1-a2)<<endl;
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