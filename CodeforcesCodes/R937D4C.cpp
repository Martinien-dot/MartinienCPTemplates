#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    string s;
    cin>>s;
    string hs = s.substr(0,2);
    string ms = s.substr(3,2);
    int hi = stoi(hs);
    int mi = stoi(ms);
    string hr = hs;
    string mr = ms;
    string mom = "PM";
    if(hi<12){
        mom = "AM";
    }
    if(hi==0){
        hr = "12";
    }
    else if(hi>12){
        hr = to_string(hi%12);
    }
    cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<ms<<" "<<mom<<endl;
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