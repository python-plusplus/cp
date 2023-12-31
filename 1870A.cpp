#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n, k, x;
    cin >> n >> k >> x;
    int u = min(n, x+1);
    if (k > u){
        cout << -1 << nl;
        return;
    }
    int r = 0;
    r += k * (k-1) / 2;
    if (x != k){
        r += x * max(0, (n-k)); 
    }
    else{
        r += (x-1) * max(0, (n-k)); 
    }
    cout << r << nl;
    return;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
