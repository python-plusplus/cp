#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int a, b, c, d;
    ll alice = 0;
    ll bob = 0;
    ll ans = 0;
    cin >> a >> b >> c >> d;
    while (bob >= 0 and alice >= 0 and a + b + c + d > 0){
        if(a > 0){
            a--;
            alice++;
            bob++;
        }
        else if (alice > bob and c > 0){
            c--;
            alice--;
            bob++;
        }
        else if (alice < bob and b > 0){
            b--;
            alice++;
            bob--;
        }
        else{
            if (b > 0){
                b--;
                alice++;
                bob--;

            }
            else if (c > 0){
                c--;
                alice--;
                bob++;
            }
            else{
                d--;
                alice--;
                bob--;
            }
        }
        ans++;
    }
    cout << ans << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
