#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

//Sort by a then b then just greedy
unordered_map<int, priority_queue<int, vector<int>, greater<int>>> m;

void solve(){    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b; 
        if (!m.count(a)){
            priority_queue<int, vector<int>, greater<int>> p;
            p.push(b);
            m[a] = p;
        }
        else{
            if (m[a].size() < a){
                m[a].push(b);
            }
            else{
                if (m[a].top() < b){
                    m[a].pop();
                    m[a].push(b);
                }
            }
        }
    }
    ll sum = 0;
    for (auto it: m){
        for (int i = 0; i < it.first; i++) {
            sum += it.second.top();
            it.second.pop();
            if (it.second.empty()){
                break;
            }
        }
    }
    cout << sum << nl;
    m.clear();
}


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
