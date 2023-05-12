#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();


ll dp[5005];
vector<ll> v;
vector<ll> u;
priority_queue<ll> q;

int main() {
    int n, m, k;
    cin >> n >> m >> k;  
    ll curr = 0;
    for (int i = 0; i < m * ceil((float) n / m); i++) {        
        ll a;
        if (i < n){
            cin >> a;
        }
        else{
            a = -llinf;
        }
        v.push_back(a);
    }
    for (int i = 0; i < n-m+1; i++) {
        u.push_back(accumulate(v.begin() + i, v.begin() + i + m, 0));
    }
    u.push_back(0);
    ll curmax = 0;
    int mi = 0;
    int j = 0; 
    for (int i = 0; i < size(u); i++) {
        cout << u[i] << ' ' ;
    }
    cout << '\n';
    for (int i = 0; i < u.size(); i++) {
        ll c = (i - j) % m;
        cout << c << ' ' << u[i] << '\n'; 
        if (u[i] > curmax){
            curmax = u[i];
            mi = i;
        }
        if (c == m - 1){
            cout << ' ' << i << '\n';
            q.push(curmax);
            curmax = 0;
            j = (mi) % m;
            i = mi + (m-1);
        }
    }
    q.push(curmax);

    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += q.top();
        q.pop();
    } 
    cout << sum;
}
