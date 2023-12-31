#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

ll dp[200005]{0};
vector<ll> v;
int n;

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
        k = max(a, k);
        v.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        dp[i + 2] = max(dp[i] + v[i], dp[i + 1]);
    }
    if (k < 0){
        cout << k << nl;
    }
    else{
        cout << max(dp[n], dp[n+1]) << nl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
