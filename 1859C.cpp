#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n;
    cin >> n;
    ll m = 0;
    if (n == 2){
        cout << 2 << nl;
        return;
    }
    if (n == 3){
        cout << 7 << nl;
        return;
    }
    for (int i = 1; i < n-2; i++) {
        m += i * i;
    }
    cout << m + 2 *((n-2) * (n)) << nl;
    return;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
