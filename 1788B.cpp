#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

map<int, int> m;

ll SD(ll x){
    ll s = 0;
    if(m.count(x) == 0){
        while (x != 0){
            s += floor(x % 10);
            x = floor(x / 10);
        }
        m[x] = s;
        return s;
    }
    else{
        return m[x];
    }
}

int checkSD(ll x, ll y){
    if (2 > abs(SD(x) - SD(y))){
        return 1;
    }
    else{
        return 0;
    }
}

void solve(int k){
    for (int i = 0; i < k; i++) {
        if (checkSD(i, k-i) == 1){
            cout << i << " " << k-i << '\n';
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;
        solve(k);
    }
    
}
