#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<ll> v;
ll dp[5005][5005];
int n, m, k;

ll dpf(int j, int knt){
    if (dp[j][knt] != -1){
        cout << "SDS " << j << ' ' << knt << ' ' << dp[j][knt] << '\n';
        return dp[j][knt];
    }
    else{
        if (j >= v.size() || knt <= 0){
            return 0;
        } 
        ll mc = v[j];
        mc = max(dpf(j + 1, knt), mc + dpf(j + m, knt-1));
        dp[j][knt] = mc;
        cout << "BSL " <<j << ' ' << knt << ' ' << mc << '\n';
        return mc;
    }
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> m >> k;
    queue<int> q;
    ll curr = 0;
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        q.push(a);
        curr += a;
        if (i >= m - 1){
            v.push_back(curr);
            curr -= q.front();
            q.pop();
        }
    } 
    cout << dpf(0,k);
}
