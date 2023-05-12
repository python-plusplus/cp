#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] > m){
            cout << "NO" << nl;
            return;
        }
        if (i != 0) m += v[i];
    } 
    cout << "YES" << nl;
    return;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
