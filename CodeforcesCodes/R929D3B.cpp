#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int res = 0;
    int d1 = 0;
    int d2 = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%3==1){
            d1++;
        }
        if(arr[i]%3==2){
            d2++;
        }
        sum+=arr[i];
    }
    d2 = d2%3;
    while(d1>0 && d2>0){
        d1--;
        d2--;
    }
    if(sum%3==0){
        cout<<0<<endl;
    }
    else if((sum+1)%3==0){
        cout<<1<<endl;
    }
    else if(d1==0){
        cout<<d2%3<<endl;
    }
    else if(d2==0){
        cout<<d1%3<<endl;
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