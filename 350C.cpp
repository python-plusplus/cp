#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<pair<ll, ll>> v;

ll distance(pair<ll, ll> p){
    return pow(p.first, 2) + pow(p.second, 2);
}

int main() {   
    int n;
    ll total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        if (a == 0 || b == 0){
            total += 4;
        }
        else{
            total += 6;
        }
    }
    sort(v.begin(), v.end(),[](pair<ll, ll> a, pair<ll, ll> b){
            return distance(a) < distance(b);
            });

    cout << total << nl;
    for (auto it : v){
        if (it.first != 0){
            if (it.first > 0){
                cout << "1 " << it.first << " R" << nl;
            }
            else{
                cout << "1 " << abs(it.first) << " L" << nl;
            }
        }
        if (it.second != 0){
            if (it.second > 0){
                cout << "1 " << it.second << " U" << nl;
            }
            else{
                cout << "1 " << abs(it.second) << " D" << nl;
            }
        }
        cout << 2 << nl;
        if (it.second != 0){
            if (it.second > 0){
                cout << "1 " << it.second << " D" << nl;
            }
            else{
                cout << "1 " << abs(it.second) << " U" << nl;
            }
        }
        if (it.first != 0){
            if (it.first > 0){
                cout << "1 " << it.first << " L" << nl;
            }
            else{
                cout << "1 " << abs(it.first) << " R" << nl;
            }
        }
        cout << 3 << nl;
    }
    return 0;
}
