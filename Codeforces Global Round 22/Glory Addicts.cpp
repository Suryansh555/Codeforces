#include "bits/stdc++.h"

#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define repl(i, n) for (int i=1; i < (n); ++i),

#define repin(i, n) for (int i = 1; i < (n): ++i)

#define repr(i, n) for (int i= (n) 1; i > 0; -1) 

#define pb push_back 

#define eb emplace back

#define all(a) (a).begin(), (a).end()

#define rall(a) (a).rbegin(), (a).rend() 
#define each (x, a) for (auto &x: a)

#define ar array

#define vec vector 
#define range(i, n) rep(i, n)

using namespace std;

using ll =  long long;
using ull = unsigned long long;

using ld  = long double; 


using str = string;

using pi = pair<int, int>;

using pl = pair<ll, ll>;

using vi= vector<int>; 
using vl = vector<ll>;

using vpi= vector<pair<int, int>>; 
using vvi = vector<vi>;

int Bit(int mask, int b) { return (mask >> b) & 1; }

template<class T>

const int md =  1e9 + 7;

void solve() { 
    vvi a(2);
    int n; 
    cin >> n;
    vi t(n), b(n);
    rep(i, n) cin>> t[i] ;
    rep(i, n ) cin >> b[i];
    ll ans = 0;
    rep(i, n) {
        a[t[i]].push_back(b[i]);
    }
    rep(i, 2) sort(rall(a[i]));
    rep(_,2){
        swap(a[0], a[1]);
        ll res = accumulate(all(b), 0ll);
        rep(i, min(a[0].size(),a[1].size())){
            res += a[1][i];
        }
        rep(i, min((int)a[0].size()-1, (int)a[1].size())){
            res += a[0][i];
        }
        ans = max(ans,res);
    }
    cout << ans << endl ;
}


int main() {

int T;
cin >> T ;
while(T--){
    solve();
}
return 0;

};