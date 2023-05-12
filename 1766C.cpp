#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

char a[200005][2];
int dpa[200005][2][2];
int m;

int dp(int x, int y, bool been){
    if (dpa[x][y][been] != -1){
        return dpa[x][y][been];
    }
    if (a[x][y] == 'W'){
        return 0;
    }
    if (x == m-1){
        if (been)
            return 1;
        else{
            dpa[x][y][been] = 1 + dp(x, !y, true);
            return 1 + dp(x, !y, true);
        }
    }
    if (been){
        dpa[x][y][been] = 1 + dp(x+1, y, false);
        return 1 + dp(x+1, y, false);
    }
    else{
        dpa[x][y][been] = 1 + max(dp(x, !y, true), dp(x + 1, y, false));
        return 1 + max(dp(x, !y, true), dp(x + 1, y, false));
    }
}

void solve(){
    memset(dpa, -1, sizeof(dpa));
    int k = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        char c;
        cin >> c;
        if (c == 'W') a[i][0] = 'W';
        else{
            a[i][0] = 'B';
            k++;
        }
    }
    for (int i = 0; i < m; i++) {
        char c;
        cin >> c;
        if (c == 'W') a[i][1] = 'W';
        else{
            a[i][1] = 'B';
            k++;
        }
    }
    if (a[0][0] == 'W' && a[0][1] == 'W'){
        cout << "NO" << nl;
    }
    else{
        cout << (max(dp(0, 0, false), dp(0, 1, false)) == k ? "YES" : "NO") << nl; 
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }
}
