#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

//taken from editorial
int dp[200005]; int dis[200005];
vector<pair<int,int>> v[200005];

void dfs(int u){
    for (auto it: v[u]) {
        if (dp[it.first] == 0) {
            dp[it.first] = dp[u] + (dis[u] >= it.second);  
            dis[it.first] = it.second;
            dfs(it.first);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) dp[i] = dis[i] = 0, v[i].clear();
    for (int i = 1; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back({b, i});
        v[b].push_back({a, i});
    }
    dp[1] = 1;
    dfs(1);
    int total = 0;
    for (int i = 1; i <= n; i++) total = max(total, dp[i]);       
    cout << total << nl;
}


int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
