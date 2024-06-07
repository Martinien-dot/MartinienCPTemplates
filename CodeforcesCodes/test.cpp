#include<bits/stdc++.h>

using namespace std;


int main() {
    multiset<int>ost;
    ost.insert(5);
    ost.insert(4);
    ost.insert(2);
    auto i = upper_bound(ost.begin(), ost.end(), 5);
    if(i==ost.end()){
        cout<<"rien"<<endl;
    }
    else{

        cout<<*i<<endl;
    }
}
