#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
   int n, q;
   cin>>n>>q;
   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   sort(arr, arr+n, greater<int>());
   int dp[n];
   dp[0] = arr[0];
   for(int i=1; i<n; i++){
    dp[i] = dp[i-1] + arr[i];
   }
   for(int _=0; _<q; _++){
    int target;
    cin>>target;
    int l = 1;
    int r = n;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(dp[mid-1]>=target){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<endl;
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