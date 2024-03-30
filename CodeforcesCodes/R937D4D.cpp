#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

vector<int>possibles;
void fonct(int l, int k){
    if(l<=0){
        return;
    }
    possibles.push_back(k);
    fonct(l-1, k*10);
    fonct(l-1, k*10+1);
}
void solve(){
    int n;
    cin>>n;
    string aide = to_string(n);
    int taille = aide.size();
    possibles.clear();
    fonct(taille, 1);
    bool vrai = false;
    possibles.erase(possibles.begin());
    for(int i=0; i<possibles.size(); i++){
        int fo = possibles[i];
        if(n<fo){
            continue;
        }
        if(n==1){
            break;
        }
        while(n%fo == 0){
            if(n==1){
                break;
            }
            n=n/fo;
        }
    }
    if(n==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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