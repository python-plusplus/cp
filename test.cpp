#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool isPrime(long double n){
   for (ll i = 2; i <= sqrt(n); i++) {
       if ((ll) n % i == 0){
           return false;
       }
   }
   return true;
}

bool isInt(long double n){
    return (ll) n * 10 == (ll) (n * 10);
}

int main(){
    cout << isInt(sqrt(26));
 
    return 0;
}
