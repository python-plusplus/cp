#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n, m;
    cin >> n >> m;
    int A = 0;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        A ^= a;
    }
    int B = 0;
    int b;
    for (int i = 0; i < m; i++) {
        cin >> b;
        B |= b;
    }
    if (!(n&1)){
        cout << ((~B) & A) << ' ' <<  A << nl;
    }
    else{ 
        cout << A << ' ' << (B | A) << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
