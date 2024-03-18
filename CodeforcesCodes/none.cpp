#include <bits/stdc++.h>
#define entree(n, v) for(int i=0; i<int(n); i++) std::cin>>v[i];
#define max3(a, b, c) std::max(max(a, b), c);
using namespace std;
int main(){
    int l = 1;
    cin>>l;
    for(int i=2; i<=l; i++){
        if(l%i==0){
            cout<<i<<endl;
        }
    }
}