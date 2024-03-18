#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    long long n, k;
    cin>>n>>k;
    long long res = INT_MAX;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%k==0){
            res = 0;
            break;
        }
        long long temp = (arr[i]/k + 1)*k-arr[i];
        res = min(res, temp);
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