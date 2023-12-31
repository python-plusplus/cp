#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    ll n;
    cin >> n;
    ll sum = 0;
    while (n != 0){
        sum += n;
        n = floor(n/2);
    }
    cout << sum << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
