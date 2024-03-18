
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0, j = n-1;
    while(i<n && j>=0 && i<j && arr[i]==arr[j]){
        j--;
    }
    while(i+1<n && i<j && arr[i+1]==arr[i]){
        i++;
    }
    cout<<j-i<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}