#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(int k){
    int total = 0;
    int s = 0;
    vector<int> v;
    for (int i = 0; i < k; i++) {
        int j;
        cin >> j;
        if (j == 2){
            v.push_back(i);
            total += 1;
            if (total > 2 && total % 2 == 0){
                s += 1;
            }
        }
    }
    if (total % 2 == 1){
        cout << -1 << '\n';
    }
    else if(total < 2){
        cout << 1 << '\n';
    }
    else{
        cout << v[s] + 1 << '\n';
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
    return 0;
    
}
