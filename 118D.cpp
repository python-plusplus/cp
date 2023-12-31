#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int n1, n2, k1, k2;

int dp(bool nStart, int r, int nr, int nk){
    if (r == 0){
        return 1;
    }
    int p;
    if (r == n1 + k1){
         p = 0;
    }
    else{
        p = 1;
    } 
    int bound = nStart ? n2 : k2;
    for (int i = 1; i <= bound; i++) {
        if (r - i >= 0){
            if (r == n1 + k1){
                p += dp(!nStart, r - i, nr, nk);
            }
            else{
                p *= dp(!nStart, r - i, nr, nk);
            }
        }
        nStart ? nr-- : nk--;
        if (nStart == true && nr == 0){
            break;
        }
        if (nStart == false && nk == 0){
            break;
        }
    }
    return p;
}


int main() {
    cin >> n1 >> k1 >> n2 >> k2;
    cout << dp(true, n1 + k1, n1, k1) + dp(false, n1 + k1, n1, k1);
}
