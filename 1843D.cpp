#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

ll dp[200005];
bool dis[200005];
vector<int> tree[200005];

ll dfs(int v){
    dis[v] = true;
    if (dp[v] != -1){
        return dp[v];
    }
    ll c = 0;
    for (int u : tree[v]){
        if (!dis[u]){
            c += dfs(u);
        }
    }
    if (c == 0){
        c = 1;
    }
    dp[v] = c;
    return dp[v];
}

void solve(){
    memset(dp, -1, sizeof(dp));
    memset(dis, false, sizeof(dis));
    int n;
    cin >> n;

    for (int i = 1; i < n+1; i++) {
        vector<int> d;
        tree[i] = d;
    }
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) { 
        dfs(1);
        int x, y;
        cin >> x >> y;
        cout << dp[x] * dp[y] << nl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
