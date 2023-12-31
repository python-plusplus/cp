#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

unordered_map<int, int> w;
unordered_map<int, vector<int>> dp;

int main() {
    //memset(dp, {0,0}, sizeof(dp));
    int n;
    cin >> n;
    int m = 0;
    int mIdx = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a; 
        if (w[a] < w[a-1] + 1){
            w[a] = w[a-1]+ 1;
            dp[a-w[a]].push_back(i+1);
        }
        if (w[a] > m){
            m = w[a];
            mIdx = a-m;
        }
    }
    cout << m << nl;;
    for (int j : dp[mIdx]) {
        cout << j << ' ';
    }
    cout << nl;
}
