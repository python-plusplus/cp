//This problem is very similar to the algo A* we're learning in CSC384 where the cost is the literal cost and heuristic is 
#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

map<int,int> m;
vector<pair<int, int>> v;

void solve(){
    m.clear();
    v.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if (m.count(c)){
            m[c] = max(m[c], i + 1);
        }
        else{
            m[c] = i + 1;
        }
    }
    int k;
    cin >> k;
    ll j = 0;
    ll f = n;
    for (pair<int,int> p : m){
        if (k < p.first){
            v.push_back({0, f});
            break;
        }
        else if (k % p.first == 0){
            j += k / p.first;
            f -= p.second; 
            v.push_back({k / p.first,  p.second});
            v.push_back({0, f});
            break;
        }
        else{
            int l = k/p.first - 1;
            j += l + 1;
            v.push_back({l, p.second});
            k -= l * p.first;
            auto it = m.upper_bound(k);
            v.push_back({1, 1});
            break;
        }
    }
    //cout << j << 'a';
    for (pair<int, int> p : v){
        //cout << p.first << p.second << j;
        for (int i = 0; i < p.second; i++) {
            cout << j << ' ';
        }
        j -= p.first;
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
