#include <bits/stdc++.h>
 
using namespace std;
template <typename T>
class fenwick {
 public:
  vector<T> fenw;
  int n;

  fenwick(int _n) : n(_n) {
    fenw.resize(n);
  }

  void modify(int x, T v) {
    while (x < n) {
      fenw[x] += v;
      x |= (x + 1);
    }
  }

  T get(int x) {
    T v{};
    while (x >= 0) {
      v += fenw[x];
      x = (x & (x + 1)) - 1;
    }
    return v;
  }
};

// struct node {
//   int a = ...; // don't forget to set default value

//   inline void operator += (node &other) {
//     ...
//   }
// };

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n ; i++) cin >> a[i];
    
    vector<int> pos(n);
    vector<int> b = a;
    sort(b.begin(), b.end());
    for(int i = 0; i < n ; i++){
        pos[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    }
    
    long long ans = 0;
    fenwick<int> fen(n);

    for(int i=0;i<n;i++)
    {
        ans += fen.get(n-1) - fen.get(pos[i]);
        fen.modify(pos[i],1);
    }
    cout<<ans<<endl;
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t; 
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}