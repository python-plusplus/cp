#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(long double n){
   for (ll i = 2; i <= sqrt(n); i++) {
       if ((ll) n % i == 0){
           return false;
       }
   }
   return true;
}

bool ispf(long double n){
    return floor(n) == ceil(n);
}

int32_t main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
       ll k;
       cin >> k;
       if (k == 1){
           cout << "NO" << "\n";
           continue;
       }
       if(isPrime(sqrt(k)) && ispf(sqrt(k))){
           cout << "YES" << "\n";
       }
       else{
           cout << "NO" << "\n";
       }
    }
}
