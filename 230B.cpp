#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) { 
        ll k;
        cin >> k;
        int test = 0;
        for (ll j = 2; j <= sqrt(k) + 1; j++) {
            if (k % j == 0){
                if (test != 0){
                    test = 2;
                    cout << "NO" << "\n";
                    break;
                }
                else{
                    test = 1;
                }
            }
        }
        if (test == 1){
            cout << "YES" << "\n";
        }
        if (test == 0){
            cout << "NO" << "\n";
        }
   }
}
