#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

unordered_map<int, vector<int>> m;
vector<int> v;
set<int> v;
bool seen[200005];

int total;

void solve(){
    memset(seen, false, sizeof(seen));
    v.clear();
    m.clear();
    total = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vector<int> u;
        if (!m.count){
            v.push_back(a);
            m[a] = u;
        }
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m[v[i]].push_back(a);
    }
    ll pMax = n*n;



}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
