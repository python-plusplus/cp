#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<ll> v;
int main() {
    v.push_back(-llinf);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        v.push_back(k);
    }
    if (n == 1){
        cout << "yes\n" << 1 << " " << 1;
        return 0;
    }
    int state = 0;
    ll prev = v[0];
    ll a;
    ll b;
    ll c;
    ll d;
    for (ll i = 1; i <= n; i++) {
        ll k;
        k = v[i];
        if (state == 0){
            if (prev > k){
                state = 2;
                a = i - 2;
                c = i - 1;
            }
        }
        else if (state == 2){ 
            if(prev < k){
                b = i - 1;
                d = i;
                state = 3;
                
            }
        } 
        else if (state == 3){
            if(prev > k){
                cout << "no";
                return 0;
            }
        }
        prev = k;
    }
    if (state == 3){
        if (v[a] <= v[b] && v[c] <= v[d]){
            cout << "yes\n" << c << " " << b;
            return 0;
        }
        :x
            cout << "no";
            return 0;
        }
    }
    if (state == 2){
        b = n;
        if (v[a] <= v[b]){
            cout << "yes\n" << c << " " << b;
            return 0;
        }
        else{
            cout << "no";
            return 0;
        }
    }
    cout << "yes\n" << 1 << " " << 1;
    return 0;
}
