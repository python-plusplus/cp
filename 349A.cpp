#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int main() {
    ll n, a, b;
    a = 0;
    b = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll k;
        cin >> k;
        
        if (k == 25) {
            a++; 
        }
        else if (k == 50) {
            b++;a--;
        }
        else {
            if (b > 0){
                a--; b--;
            }
            else{
                a--;a--;a--;
            }
        }
        if (a < 0 or b < 0) {
            cout << "NO"; 
            return 0;
        }
        
    }
    cout << "YES";
    return 0;
}
