#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int m = 0;
    int c = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 0){
            c++;
        }
        else{
            m = max(c, m);
            c = 0;
        }
    }
    cout << max(c, m) << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {  
        solve();
    }
}
