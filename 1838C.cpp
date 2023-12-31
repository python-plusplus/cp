#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n, m;
    cin >> n >> m;
    if (n % 2 == 0 and m % 2 == 0){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << m * i + j + 1 << ' ';
            }
            cout << nl;
        }
    }
    else if (n % 2 == 1 and m % 2 == 1){
        int t = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << (m * i) + ((t+j) % m) + 1 << ' ';
            }
            cout << nl;
            t++;
        }
    }
    else{
        if (n % 2 == 1){
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << m * i + j + 1 << ' ';
                }
                cout << nl;
            }
        }
        else{
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << i + j * n + 1 << ' ';
                }
                cout << nl;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
