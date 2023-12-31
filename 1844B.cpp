#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n;
    cin >> n;
    if (n == 1){
        cout << 1 << nl;
    }
    else if (n == 2){
        cout << 2 << ' ' << 1 << nl;
    }
    else{
        cout << 2 << ' ';
        for (int i = 0; i < floor(float (n - 3) / 2); i++) {
            cout << 4 + i << ' ';
        }
        cout << 1 << ' ';
        for (int i = 0; i < ceil(float (n - 3) / 2); i++) {
            cout << 4 + floor(float (n - 3) / 2) + i << ' ';
        }
        cout << 3 << ' ' << nl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
