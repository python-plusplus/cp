#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll a[100005];
int main() {
    memset(a, 0, sizeof(a));
    ll n;
    cin >> n;
    for (ll j = 0; j < n; j++) { 
        ll k;
        cin >> k;
        a[k] += 1;
    }
    a[1] = 1 * a[1];
    a[2] = 2 * a[2];
    for (ll i = 3; i < 100005; i++) {
        a[i] = max(a[i - 1], i * a[i] + a[i-2]);
        a[i-1] = max(a[i-1], a[i-2]);
    }
    cout << a[100003];
    return 0;
}
