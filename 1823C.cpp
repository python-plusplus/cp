#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int checkPrimeCount(int k){
    int m = 0;
    for (int i = 2; i <= (int) sqrt(k); i++) {
        if (k % i == 0){
            m += 2;
        }
    }
    if (m == 0){
        return 1;
    }
    if (m == 2){
        return 2;
    }
    else{
        return 3;
    }
}

void solve(){
    int c = 0;
    int l = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int j = checkPrimeCount(a);
        l += j;
        if (l >= 3){
            l = 0;
            c += 1;
        }
    }
    cout << c << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
