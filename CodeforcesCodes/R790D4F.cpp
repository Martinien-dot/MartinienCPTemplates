#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
     cin>>arr[i];
    }
    map<int, int>mp;
    for(int i:arr){
     mp[i]++;
    }
    vector<int>aide;
    for(auto c:mp){
     if(c.second>=m){
         aide.push_back(c.first);
     }
    }
    if(aide.empty()){
     cout<<-1<<endl;
     return;
    }
    int mx = 0;
    int lans = aide[0];
    int rans = aide[0];
    int l = aide[0];
    for(int i=1; i<aide.size(); i++){
        if(aide[i] == aide[i-1]+1){
            if(aide[i]-l>mx){
                lans = l;
                rans = aide[i];
                mx = rans-lans;
            }
        }
        else{
            l = aide[i];
        }
    }
    cout<<lans<<" "<<rans<<endl;
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