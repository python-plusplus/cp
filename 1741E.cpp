#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int dpa[200005][100005];
int sum = 0;
int n;

int dp(int cnt, int idx){
    if (cnt > (n / 2)){
        dpa[cnt][idx] = -1;
    }
    else if (dpa[cnt][idx] == n - cnt - 1){
        dpa[cnt][idx] = -1;
    }
    else if (dpa[cnt][idx] > n - cnt){
        dpa[cnt][idx] = -1;
    }
    else if(d){

    } 
}

int solve(){
    memset(dpa, 0, sizeof(dpa));
    sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        dpa[1][i] = a;
    }

}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
