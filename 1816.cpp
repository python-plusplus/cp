#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int solve(){
    int a, b;
    bool s = false;
    cin >> a >> b;
    if (a > b){
        swap(b, a);
        s = true;
    }
    int c = a-1;
    int d = b-1;
    int i = 0;
    if (__gcd(a, b) == 1){
        if (s) cout << 1 << nl << b << " " << a << nl;
        else cout << 1 << nl << a << " " << b << nl;
        return 0;
    }
    while (__gcd(c, d) != 1 && d >= 0){
        d -= 1;
    }
    if (s) cout << 2 << nl << d << " " << c << nl << b << " " << a << nl;
    else cout << 2 << nl << c << " " << d << nl << a << " " << b << nl;  
    return 0;
    
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
