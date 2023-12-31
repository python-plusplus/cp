#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n, k;
    cin >> n >> k;
    int a = 0;
    int lastI;
    if (k == 1){
        cout << n << nl;
        return;
    }
    for (int i = 1; i <= n/2; i++) {
        while (a < ceil(i / (float) k)){
            a += 1;
            lastI = i;
        }
    }
    if (a < ceil((n - lastI)/ float(k))){
        cout << a * 2 + 1 << nl;
        return;
    }
    cout << a * 2 << nl;
    return; 
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
       solve(); 
    }
}
