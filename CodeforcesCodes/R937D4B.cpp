#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int _=0; _<2; _++){
                for(int j=0; j<n; j++){
                    if(j%2==0){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                }
                cout<<endl;
            }
        }
        else{
            for(int _=0; _<2; _++){
                for(int j=0; j<n; j++){
                    if(j%2==1){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                }
                cout<<endl;
            }
        }
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