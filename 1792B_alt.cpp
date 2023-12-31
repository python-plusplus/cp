#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a + (a >= 1 ? 2 * min(c,b) + min(abs(b-c) + d, a+1) : min(1, b+c+d)) << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
