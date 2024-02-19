#include<bits/stdc++.h>
using namespace std;

bool validation(vector<int> &ar, int taille){
    bool res = true;
    for(int i=0; i<taille-2; i++){
        for(int j=i+1; j<taille-1; j++){
            if((ar[i]%ar[j]==0 && ar[i+1]%ar[j+1]==0) || (ar[j]%ar[i]==0 && ar[j+1]%ar[i+1]==0)){
                res = false;
                break;
            }
        }
        if(!res){
            break;
        }
    }
    return res;
}
vector<int> perm(int n, vector<int>&ar){
    do{
        if(validation(ar, n)){
            return ar;
        }
    } while(next_permutation(ar.begin(), ar.end()));
    return {};
}

void solve(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=1; i<=n; i++){
        ar[i-1] = i;
    }
    random_device rd;
    mt19937 gen(rd());
    shuffle(ar.begin(), ar.end(), gen);
    ar = perm(n, ar);
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}