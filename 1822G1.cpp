#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

unordered_map<int, int> m;

int solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[a]++;
    }
    ll r = 0;
    for(auto p : m){
        int i = p.first;
        if (m[i] >= 3){ 
            r += (ll) m[i] * (m[i] - 1) * (m[i] - 2);
        }
        int j = 2;
        while(i * j * j  <= 1000000){
            if (m.count(i*j) && m.count(i*j*j)){
                r += (ll) m[i] * m[i*j] * m[i*j*j];
            }
            j++;
        }
    }
    cout << r << nl;
    m.clear();
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
