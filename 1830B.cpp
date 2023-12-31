#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<pair<int,int>> v;
int total;

void getPairs(int i, int j){
    for (int k = j; k != i; k--) {
        if (v[i].first * v[k].first == v[i].second + v[k].second){
            total++;
        }
    }
}

void solve(){
    total = 0;
    v.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back({a, 0});
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[i].second = a;
    }
    sort(v.begin(), v.end(), 
            [](pair<int,int> a, pair<int,int> b){
            if (a.first == b.first){
            return a.second < b.second;
            }
            else{
            return a.first < b.first;
            }
            } );
    ll maxP = n * n;
    int i = 0;
    int j = n - 1;
    while (i < j){ 
        ll p = v[i].first * v[j].first;
        if (p > maxP){
            j--;
        }
        else{
            getPairs(i, j);
            i++;
        }
    }
    cout << total << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
