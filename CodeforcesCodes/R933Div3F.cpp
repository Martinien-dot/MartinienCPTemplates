#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
#define entreeValeur(n, v) for(int i=0; i<int(n); i++) std::cin>>v[i];
#define max3(a, b, c) std::max(max(a, b), c);
#define min3(a, b, c) std::min(min(a, b), c);
using namespace std;

void solve(){
    long long n, m, k;
    cin>>n>>m>>k;
    vector<long long> p(n);
    vector<long long> models(m);
    vector<long long> fonctions(k);
    entreeValeur(n, p);
    entreeValeur(m, models);
    entreeValeur(k, fonctions);
    long long m1, m2;
    m1 = 0;
    m2 = 0;
    long long ind;
    for(long long i=1; i<n; i++){
        m2 = max(m2, abs(p[i] - p[i-1]));
        if(m2>m1){
            long long temp;
            temp = m2;
            m2 = m1;
            m1 = temp;
            ind = i-1;
        }
    }
    long long res = m1;
    sort(fonctions.begin(), fonctions.end());
    long long target = (p[ind] + p[ind+1])/2;
    for(int i=0; i<m; i++){
        int l = 0;
        int r = k-1;
        while(l<r-1){
            long long mid = (r+l)/2;
            if(models[i] + fonctions[mid]>=target){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        res = min(res, max(max(m2, abs(p[ind]-models[i]-fonctions[l])), abs(p[ind+1]-fonctions[l]-models[i])));
        res = min(res, max(max(m2, abs(p[ind]-models[i]-fonctions[r])), abs(p[ind+1]-fonctions[r]-models[i])));
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