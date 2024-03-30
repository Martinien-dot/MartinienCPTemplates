#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int temp;
    int res = INT_MIN;
    int i0, j0, i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp = arr[i][j];
            i0=i;
            j0=j;
            while(i0-1>=0 && j0+1<m){
                temp+=arr[i0-1][j0+1];
                i0--;
                j0++;
            }
            i0=i;
            j0=j;
            while(i0+1<n && j0+1<m){
                temp+=arr[i0+1][j0+1];
                i0++;
                j0++;
            }
            i0=i;
            j0=j;
            while(i0+1<n && j0-1>=0){
                temp+=arr[i0+1][j0-1];
                i0++;
                j0--;
            }
            i0=i;
            j0=j;
            while(i0-1>=0 && j0-1>=0){
                temp+=arr[i0-1][j0-1];
                i0--;
                j0--;
            }
            res = max(res, temp);
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