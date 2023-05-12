#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<ll> v;

int main() {
    ll a, b, c;
    ll sum;
    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    cout << min((v[0] + v[1]) , (v[0] + v[1] + v[2]) / 3);
    return 0;
}
