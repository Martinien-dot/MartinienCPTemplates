#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin>>n;
    int temp1 = 1;
    int temp2;
    vector<int> res;
    while(n>0){
        temp2 = n%10;
        n/=10;
        if(temp2>0){
            res.push_back(temp2*temp1);
        }
        temp1*=10;
    }
    cout<<res.size()<<endl;
    for(int c:res){
        cout<<c<<" ";
    }
    cout<<endl;
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