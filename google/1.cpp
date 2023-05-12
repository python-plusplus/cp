#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int main() {
    int n;
    cin >> n;
    int m = inf;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        m = min(abs(k), m);
    }
    cout << m;
    return 0;
    
}
