#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n-1; i++){
        if(arr[i-1]==0){
            continue;
        }
        else{
            if(arr[i-1]>arr[i+1] || 2*arr[i-1]>arr[i]){
                cout<<"NO"<<endl;
                return;
            }
            else{
                arr[i]-=2*arr[i-1];
                arr[i+1]-=arr[i-1];
            }
        }
    }
    if(arr[n-2]==arr[n-1] && arr[n-1]==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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