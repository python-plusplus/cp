#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;
pair<int,int> dp[100005];
int m = 0;

pair<int,int> dpf(int idx){ 
    if (dp[idx].first != 0){
        return dp[idx];
    }
    int cnt = 1;
    for (int i = idx-1; i >= 0; i--) {
        pair<int,int> p = dpf(i);
        if (v[i] > v[idx]){
            if (p.first >= cnt){
                dp[idx].first = cnt;
                dp[idx].second = i;
                m = max(cnt, m);
                return dp[idx];
            }
        }
        else{
            if (v[p.second] > v[idx]){
                i = p.second + 1;
                cnt = max(cnt, p.first + 1);
            }
            else{
                cnt = max(cnt, p.first + 1);
            }
        }
    }
    dp[idx].first = inf;
    return {inf, 0};
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
       int a;
       cin >> a;
       v.push_back(a);
    }
    dp[0] = {inf, 0};
    dpf(n-1);
    //for (pair<int,int> j : dp) {
   //     cout << j.first << '-' << j.second << ' ';
        
    //}
    cout << m;

}
