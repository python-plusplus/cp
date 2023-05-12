#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, m;
    map<int, int> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        v[i + 1] = i + 1;
    }
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        swap(v[k], v[k+1]);
    }
    for (int i = 0; i < n; i++) {
        cout << v[i + 1] << "\n";
    }
}
