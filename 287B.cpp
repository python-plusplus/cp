#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int main() {
    ll n, k, m, j;
    cin >> n >> k;
    m = n - 1;
    j = k - 1;
    ll v = j * (j+1) / 2;
    if (m == 0){
        cout << 0;
        return 0;
    }
    else if (m <= j){
        cout << 1;
        return 0;
    }
    else if (m > v){
        cout << -1;
        return 0;
    }
    else{
        ll high = j, low = 0, mid = (high + low)/2, a;
        while (low < high){
            a = v - (mid * (mid-1) / 2);
            if (a == m){
                cout << j - mid + 1;
                return 0;
            }
            else if (a < m){
                high = mid;
            }
            else{
                low = mid + 1;
            }
            mid = (high + low)/2;
        }
        cout << j - mid + 2;
        return 0;
    }
}
