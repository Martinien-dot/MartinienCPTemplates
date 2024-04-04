#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
using namespace std;
//vector<int>totient(1e9);
void afficheVec1D(vector<int>vect){
    int taille = vect.size();
    for(int i=0; i<taille; i++){
        if(i==taille-1){
            cout<<vect[i];
        }
        else{
            cout<<vect[i]<<" ";
        }
    }
}
void afficheVec2D(vector<vector<int>>vect){
    for(vector<int>v:vect){
        afficheVec1D(v);
        cout<<endl;
    }
}
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}
int calc(int arr[],int m, int l, int r){
    int res = 1;
    for(int i = l; i<=r; i++){
        res = ((res%m)*(arr[i]%m))%m;
    }
    return res;
}
vector<ll>st(4*1e5, -1);
/*void segtreeMul(vector<ll>& arr){
    int z = arr.size();
    int taille = 2*z;
    for(int i=z; i<2*z; i++){
        st[i] = arr[i-z];
    }
    for(int i=z-1; i>0; i--){
        st[i] = (st[2*i]%m * st[2*i+1]%m)%m;
    }
}*/

/*ll mul(int a, int b) {
    a += n; b += n;
    ll s = 1;
    while (a <= b) {
        if (a%2 == 1) s = ((s%m)*(st[a++]%m))%m;
        if (b%2 == 0) s = ((s%m)*(st[b--]%m))%m;
        a /= 2;
        b /= 2;
    }
    return s;
}*/

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int tl[n+1];
    int tr[n+1];
    for(int i=0; i<n; i++){
        tl[i] = 0;
        tr[i] = 0;
    }
    for(int i=1; i<n; i++){
        if(s[i] == '0'){
            tl[i] = tl[i-1] + 1;
        }
        else{
            tl[i] = tl[i-1];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(s[i] == '1'){
            tr[i] = tl[i+1] + 1;
        }
        else{
            tr[i] = tr[i+1];
        }
    }
    int mn = INT_MAX;
    int res = 0;
    for(int i=0; i<=n; i++){
        if((tl[i]>=(i+1)/2) && (tr[i]>=(n-i+1)/2)){
            int temp = abs(n - 2*i);
            if(temp<mn){
                mn = min(mn, temp);
                res = i;
            }
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