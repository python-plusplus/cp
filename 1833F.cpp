#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
const ll mod = 1000000007;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

map<int, int> v;

ll inv(int i){
    //Assuming mod q where q is prime
    //Using fermats little theorem
    //Stole this from https://cp-algorithms.com/algebra/module-inverse.html#finding-the-modular-inverse-using-euclidean-division
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}

void solve(){
    v.clear();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[a]++;
    }
    if (m == 1){
        ll ans = 0;
        for (auto &p : v){
            ans = (ans + p.second) % mod;
        }
        cout << ans << nl;
        return;
    }
    int i = 0;
    int prev;
    ll curr = 1;
    ll ans = 0;
    int count = 0;
    for (const auto &p : v) {
        curr = (curr * p.second) % mod;
        if (i == 0){
            prev = p.first;
        }
        else{
            if (p.first == prev + 1){
                count++;
            }
            else{
                count = 0;
                curr = 1;
            }
            if (count >= m - 1){
                ans = (ans + curr) % mod;
                if (i >= m-1){
                    curr = (curr * inv(v[p.first - m + 1])) % mod;
                }
            }
        } 
        prev = p.first;
        i++;

    }
    cout << ans << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
