#include<bits/stdc++.h>
#define sttt ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve(){
    int m, n, x;
    cin>>m>>n>>x;
    set<int> st;
    st.insert(x);
    for(int i=0; i<n; i++){
        int d;
        string s;
        cin>>d>>s;
        set<int>stt;
        for(auto c:st){
            if(s == "?"){
                int t1 = (c-d)%m;
                while(t1<=0){
                    t1+=m;
                }
                int t2 = (c+d)%m;
                if(t2==0){
                    t2+=m;
                }
                stt.insert(t1);
                stt.insert(t2);
            }
            else if(s=="1"){
                int t1 = (c-d)%m;
                while(t1<=0){
                    t1+=m;
                }
                stt.insert(t1);
            }
            else{
                int t2 = (c+d)%m;
                if(t2==0){
                    t2+=m;
                }
                stt.insert(t2);
            }
        }
        st = stt;
        stt.clear();
    }
    cout<<st.size()<<endl;
    for(int c:st){
        cout<<c<<" ";
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