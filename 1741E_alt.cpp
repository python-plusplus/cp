#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

bool dp[300005];
vector<int> v;

int solve(){
    memset(dp, false, sizeof(dp));
    int n;
    cin >> n;
    v.push_back(0);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
        if(i + v[i] <= n && dp[i-1]) {
            dp[i + v[i]] = true;
        }
        if(i - 1 - v[i] >= 0 && dp[i - v[i] - 1]){
            dp[i] = true;
        }
    }
    if (dp[n]){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
    v.clear();
    return 0;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
