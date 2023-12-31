#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int v[3];
void solve(){
    memset(v, 0, sizeof(v));
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < 3; i++) {
        bool pass = false;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if (pass){
                continue;
            }
            int tmp = v[i] | a;
            if ((tmp | x) == x){
                v[i] = tmp;
            }
            else{
                pass = true;
            }
        }
    }
    if ((v[0] | v[1] | v[2]) == x) {
        cout << "yes" << nl;
    }
    else {
        cout << "no" << nl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
