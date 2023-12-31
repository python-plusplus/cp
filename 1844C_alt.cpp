#include <bits/stdc++.h>
#define nl '\n'
 
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();
 
vector<ll> v;
int n;
 
ll dpf(int idx){
    if (idx >= n){
        return 0;
    }
    return max(dpf(idx + 1), dpf(idx+2) + v[idx]);
}
 
void solve(){
    v.clear();
    cin >> n;
    if(n == 1){
        int a;
        cin >> a;
        cout << a << nl;
        return;
    }
    ll k = -llinf;
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        k = max(k, a);
        v.push_back(a);
    }
    if (k < 0){
        cout << k << nl;
    }
    else{
        cout << dpf(0) << nl;
    }
}
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
