#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<ll>st(1000, INT_MAX);

void segtree(vector<ll>& arr){
    int n = arr.size();
    int taille = 2*n;
    for(int i=n; i<2*n; i++){
        st[i] = arr[i-n];
    }
    for(int i=n-1; i>0; i--){
        st[i] = st[2*i] + st[2*i+1];
    }
}

ll sum(int a, int b) {
    a += n; b += n;
    int s = 0;
    while (a <= b) {
        if (a%2 == 1) s += st[a++];
        if (b%2 == 0) s += st[b--];
        a /= 2;
        b /= 2;
    }
    return s;
}
void add(int k, ll x) {
    k += n;
    st[k] += x;
    for (k /= 2; k >= 1; k /= 2) {
        st[k] = st[2*k]+st[2*k+1];
    }
}

int main(){
    n = 8;
    vector<ll> ar = {5,8,6,3,2,7,2,6};
    segtree(ar);
    add(0, 4);
    cout<<sum(0, 2)<<endl;
    for(int i=1;i<16; i++){
        cout<<st[i]<<" ";
    }
}