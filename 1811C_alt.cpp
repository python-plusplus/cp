#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int solve(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }
    cout << v[0] << " ";
    for (int i = 1; i < n-1; i++) {
        cout << min(v[i-1], v[i]) << " ";
    }
    cout << v[n-2] << " " << nl;
    return 0;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
