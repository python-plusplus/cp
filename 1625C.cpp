#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

ll dp[500][500];
vector<pair<int,int>> a;

int n, l, k;

int dpf(int idx, int cnt, int pIdx){
    if (dp[idx][cnt] != -1){
        return dp[idx][cnt];
    }
    if (idx == n){
        return 0;
    }
    if (cnt == 0){
        return 0;
    }  
    if (a[idx].first * a[idx].second >= a[idx].first * a[pIdx].second){
        dp[idx][cnt] = (ll) max(a[idx].first * a[idx].second - a[idx].first * a[pIdx].second + dpf(idx + 1, cnt + 1, pIdx), dpf(idx+1, cnt, idx+1));
    }
    else{
        dp[idx][cnt] = dpf(idx+1, cnt, idx+1);
    }
    return dp[idx][cnt];
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> l >> k;
    int prev;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        int d;
        cin >> d;
        a.push_back({d - prev, 0});
        prev = d;
    }
    a.push_back({l - prev, 0});
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        a[i].second = d;
    }
    int deez = 0;
    for (auto p : a){
      deez += p.first * p.second;
    }
    cout << deez - dpf(1, k, 0); 
}
