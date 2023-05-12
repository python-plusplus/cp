#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int trees[5000];
int main() {
    int n, v;
    cin >> n >> v;
    int m = 1;
    memset(trees, 0, sizeof(trees));
    ll total = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        m = max(a, m);
        trees[a] += b;
    }
    for (int i = 1; i <= m + 2; i++) {
        if (v - trees[i-1] < 0){
            total += v;
        } 
        else{
            total += trees[i - 1];
            if (v - trees[i-1] - trees[i] < 0){
                total += v - trees[i-1];
                trees[i] -= v - trees[i-1];
            }
            else{
                total += trees[i];
                trees[i] = 0;
            }
        }
    }
    cout << total;
    return 0;
}
