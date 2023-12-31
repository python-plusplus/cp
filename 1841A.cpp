#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n;
    cin >> n;
    if (n <= 4){
        cout << "Bob" << nl;
    }
    else{
        cout << "Alice" << nl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
