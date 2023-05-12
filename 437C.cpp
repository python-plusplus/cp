#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> stones;
    int rc[n];
    for (int i = 0; i<n, i++){
        int cost;
        cin >> cost;
        stones.push_back(cost);
    }
    for (int i = 0; i<m; i++){
        int a,b;
        cin >> a >> b;
        rc[a-1]++;
        rc[b-1]++;
    }
    return 0;
}
