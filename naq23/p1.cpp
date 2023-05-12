#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll k;
        cin >> k;
        v.push_back(k);
    } 
    sort(v.begin(), v.end());
    int c = 0;
    ll a = -1;
    ll d = 0;
    for (int i = n-1; i >= 0; i--) {
        d += v[i];
        if (d >= a){
            a = d;
            d = 0;
            c = 0;
        }
        else {
            c += 1;
        }
    }
    cout << n - c;
}
