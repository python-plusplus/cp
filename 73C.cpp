#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int arr[26][26];
int dp[101][101][26];
vector<int> base;
int baseS = 0;

    
int n;
string s;

int dpf(int idx, int cnt, int cl){
    if (idx == s.size()){
        return 0;
    }
    if (cnt == 0){
        if (cl == s[idx - 1] - 'a'){
            return 0;
        }
        else{
            return arr[cl][s[idx] - 'a'];
        }
    }
    if (dp[idx][cnt][cl] != 0){
        return dp[idx][cnt][cl];
    }
    int m = 0;
    for (int i = 0; i < 26; i++) {
        if (i == s[idx] - 'a'){
            m = max(m, dpf(idx + 1, cnt, i));
        }
        else {
            m = max(m, dpf(idx + 1, cnt - 1, i) + arr[cl][i] - base[idx]);
        }
    }
    dp[idx][cnt][cl] = m;
    return dp[idx][cnt][cl];
}

int main() {
    memset(arr, 0, sizeof(arr));
    memset(dp, 0, sizeof(dp));
    int k;
    cin >> s >> k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        char d;
        int p;
        cin >> c >> d >> p;
        int ci = c - 'a';
        int di = d - 'a';
        arr[ci][di] = p;
    }
    base.push_back(0);
    for (int i = 1; i < s.size(); i++) {
        int b = arr[s[i-1] - 'a'][s[i] - 'a'];
        baseS += b;
        base.push_back(b);
    }
    int ans = -inf;
    for (int i = 0; i < 26; i++) {
        if (i == s[0] - 'a'){
            ans = max(ans, dpf(1, k, i));
        }
        else {
            ans = max(ans, dpf(1, k-1, i));
        }
    } 
    cout << ans << nl << baseS << nl;
    cout << ans + baseS;
}
