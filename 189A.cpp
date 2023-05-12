#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int arr[4005];
vector<int> v;

int dp(int d, int cnt, int n){
    if (arr[d] == 0 || d > n){
        return 0;
    }
    if (d == n){
        return cnt;
    }
    if (arr[d] == -1){
        int j = 0;
        for (int i = 0; i < 3; i++) {
            j = max(j, dp(d + v[i], cnt + 1, n));
        }
        arr[d] = j;
    }
    return arr[d];
}
int main() {
    memset(arr, -1, sizeof(arr));
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int k = 0;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    cout << dp(0, 0, n);
    return 0;
}
