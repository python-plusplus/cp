#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<ll> v;
ll t[200005];
ll s[200005];
vector<ll> u;

int main() {
    memset(t, 0, sizeof(t));
    memset(s, 0, sizeof(s));
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        ll k;
        cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < q; i++) {
        ll a, b;
        cin >> a >> b;
        t[a-1]++;
        s[b]++;
    }
    ll count = 0;
    for(int i = 0; i < n; i++){
        count += t[i];
        count -= s[i];
        if (count != 0){
            u.push_back(count);
        }
    }
    sort(v.begin(), v.end(), greater<>());
    sort(u.begin(), u.end(), greater<>());
    ll sum = 0;
    for (int i = 0; i < u.size(); i++){
        sum += u[i] * v[i];
    }
    cout << sum;
    return 0;
}
