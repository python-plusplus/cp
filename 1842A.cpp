#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n, m;
    cin >> n >> m;
    ll ts = 0;
    ll te = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ts += a;
    }
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        te += a;
    }
    if (ts > te){
        cout << "Tsondu" << nl;
    }
    else if (te > ts){
        cout << "Tenzing" << nl;
    }
    else{
        cout << "Draw" << nl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
