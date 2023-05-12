#include <bits/stdc++.h>
#define nl '\n'
 
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();
 
unordered_map<int, int> v;
 
void solve(){
    int l = 0;
    int c = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        for (int j = 2; j * j <= a; j++) {
            while(a % j == 0){
                a /= j;
                v[j]++;
            }
        }
        if (a != 1){
            v[a]++;
        }
    }
    for (auto p : v) {
        c += p.second / 2;
        l += p.second % 2;
    }
    cout << c + l / 3 << nl;
    v.clear();
}
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
