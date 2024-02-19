#include<bits/stdc++.h>
using namespace std;

void solve() {
        // code here
        int arr[] = {4,3,7,8,6,2,1};
        int n=7;
        vector<int>res;
        int i=0;
        int j=n-1;
        while(i<j){
            res.push_back(arr[i]);
            res.push_back(arr[j]);
            i++;
            j--;
        }
        if(i==j){
            res.push_back(arr[i]);
        }
        for(int i=0; i<n; i++){
            cout<<res[i]<<" ";
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}