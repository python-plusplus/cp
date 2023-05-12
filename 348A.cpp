#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int main() {
    int n;
    cin >> n;
    ll total = 0;
    ll m = 0;
    for (int i = 0; i < n; i++) {
        ll j;
        cin >> j;
        m = max(j, m);
        total += j;
    }
    cout << max(m, total / (n-1) + (total % (n-1) != 0));
}
