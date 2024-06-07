#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 200043;
int n;
int z;
const int MOD = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1e9));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1] + a[i - 1]);
            if (j > 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + a[i - 1] - (i > 1? a[i - 2] : 0));
            }
            dp[i][j] %= MOD;
        }
    }
    cout << dp[n][k] << endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



