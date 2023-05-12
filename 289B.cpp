#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;
int main() {
    ll sum = 0;
    int n, m, d;
    cin >> n >> m >> d;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
    }
    sort(v.begin(), v.end());
    int s = floor(v.size()/2);
    for (int i = 0; i < v.size(); i++) {
        int dif = abs(v[s] - v[i]); 
        if (dif % d == 0){
            sum += dif / d;
        }
        else{
            cout << -1;
            return 0;
        }
    }
    cout << sum;
    return 0;
}
