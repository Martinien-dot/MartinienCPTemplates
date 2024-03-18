#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
bool visited[1005][1005];
int arr[1005][1005];
int n, m;
int dfs(int i, int j){
    int ans = arr[i][j];
    visited[i][j] = true;
    if(i!=0 && arr[i-1][j]!=0 && visited[i-1][j]!=true){
        ans+=dfs(i-1, j);
    }
    if(j!=0 && arr[i][j-1]!=0 && visited[i][j-1]!=true){
        ans+=dfs(i, j-1);
    }
    if(i!=n-1 && arr[i+1][j]!=0 && visited[i+1][j]!=true){
        ans+=dfs(i+1, j);
    }
    if(j!=m-1 && arr[i][j+1]!=0 && visited[i][j+1]!=true){
        ans+=dfs(i, j+1);
    }
    return ans;
}
void solve(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            visited[i][j] = false;
            cin>>arr[i][j];
        }
    }
    int res = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!visited[i][j] && arr[i][j]!=0){
                res  = max(dfs(i, j), res);
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