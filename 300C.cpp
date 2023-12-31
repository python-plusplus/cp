#include <bits/stdc++.h>
#define nl '\n'
 
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();
 
 
const int mod = 1e9 + 7;
 
bool checkGood(int n, int a, int b){
   while (n != 0){
       if (n % 10 == a || n % 10 == b){
           ;
       }
       else{
           return false;
       }
       n /= 10;
   } 
   return true;
}
 
ll fact(int n){
    if (n == 0){
        return 1;
    }
    return (n * fact(n-1)) % mod;
}
 
ll inv(int i){
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}
 
int main() {
    int a, b, n;
    ll fn = fact(n);
    ll t = fact(n);
    ll ans = 0;
    cin >> a >> b >> n;
    for (int i = 0; i <= n; i++) {
        if (checkGood(a * i + b * (n-i), a, b)){
            ll m = (fn * inv(t)) % mod;
            ans = (ans + m) % mod;
        }
        t = (t * ((i+1) * inv(n - i) % mod)) % mod;
    }
    cout << ans << nl;
    return 0;
}
