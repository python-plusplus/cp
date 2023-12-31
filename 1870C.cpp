#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int m[100005][2];

void solve(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        m[i][0] = -inf;
        m[i][1] = inf;
    }
    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        m[a][0] = max(m[a][0], i);
        m[a][1] = min(m[a][1], i);
    }
    int b = -inf;
    int c = inf;
    vector<int> v;
    for (int i = k; i >= 1; i--){
        if (m[i][0] == -inf){
            v.push_back(0);
        }
        else{
            b = max(b, m[i][0]);
            c = min(c, m[i][1]);
            v.push_back(2 * (b - c + 1));
        }
    }
    reverse(v.begin(), v.end());
    for (int p : v){
        cout << p << ' ';
    }
    cout << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
