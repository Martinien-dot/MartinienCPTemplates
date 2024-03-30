#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    if(n<m){
        cout<<"No"<<endl;
        return;
    }
    if(n%2==0){
        if(m%2==0){
            cout<<"Yes"<<endl;
            for(int i=1; i<m;i++){
                cout<<1<<" ";
            }
            cout<<n-(m-1);
        }
        else{
            if(m>n/2){
                cout<<"No";
            }
            else{
                cout<<"Yes"<<endl;
                for(int i=1; i<m;i++){
                    cout<<2<<" ";
                }
                cout<<n-(m-1)*2;
            }
        }
    }
    else{
        if(m%2==0){
            cout<<"No";
        }
        else{
            cout<<"Yes"<<endl;
            for(int i=1; i<m; i++){
                cout<<1<<" ";
            }
            cout<<n-(m-1);
        }
    }
    cout<<endl;
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