#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;
vector<int> dp;
void solve(){
    v.clear();
    dp.clear();
    int n;
    cin >> n;
    //initialize the arrays
    for (int i = 0; i < n+1; i++) {
        dp.push_back(-inf);
    }
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        int tmp = dp[v[i]];
        //This is a really interesting trick from tourist's sol
        //Basically the idea is that after you store the "oldest" instance of the number we see, it basically won't ever change. 
        //So even though we use the max function, its actually kinda overkill.
        //The idea is that after you find the oldest instance you basically never change that position. In fact its impossible to change. Like wtf?
        //Because the next instance of the same number you find is at least dp[0] (The segment size removed) + 1 -> that implies that if you set the position of the first at -4
        //Then the next you find is at least  -4 - (dp[0] + 1).
        //Say the size of the segment we removed in between is 5.
        //Then -4 - (5 + 1) = -10
        //dp[0] = 5, 10 - 5 = 5
        //It's real postion is at 10, which means dp[0] = 5, and thus -4 > 10 - 5.
        //Anyways, just know that this is a way to store the first instance of a number.
        dp[v[i]] = max(dp[v[i]], dp[0] - i);
        dp[0] = max(dp[0], tmp + i + 1);
    }
    cout << dp[0] << nl;
}

int main() {
    int t;
    cin >> t;
    for (int lm = 0; lm < t; lm++) {
        solve();
    }
}
