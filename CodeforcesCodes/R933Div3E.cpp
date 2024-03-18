#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n, m, k, d;
    cin>>n>>m>>k>>d;
    vector<long long>a(n);
    for(int i=0; i<n; i++){
        vector<long long>dp(m, 1e9);
        dp[0] = 1;
        multiset<long long> mst = {1};
        vector<int> v(m);
        cin>>v[0];
        for(int j=1; j<m-1; j++){
            cin>>v[j];
            dp[j] = *mst.begin() + v[j] + 1;
            if(j-d-1>=0)
                mst.erase(mst.find(dp[j-d-1]));
            mst.insert(dp[j]);
        }
        cin>>v[m-1];
        dp[m-1] = *mst.begin() + v[m-1] + 1;
        a[i] = dp[m-1];
    }
    long long res = INT_MAX;
    long long temp = 0;
    for(int l = 0; l<k; l++){
        temp+=a[l];
    }
    res = temp;
    for(int h=k; h<n; h++){
        temp = temp+a[h] - a[h-k];
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