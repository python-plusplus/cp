#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();


int main() {
    int n;
    ll sum = 0;
    cin >> n;
    int carry = 0;
    int prev;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (carry){
            if (carry == 1) a -= 1;
            else if (carry == 2 and a > 1) a -= 2; 
            else a -= 1, carry = 1;
        }
        if (i != n-1){
            if (carry == 2) carry = 1;
            else if (carry == 1 and n % 2 == 1) carry = 2;
            else if (carry == 0 and n % 2 == 1) carry = 1;
            :x
            ;x
            :x
            adfad
            sum++;
        }
        sum += a / 2;
        prev = a;
    } 
    if (n % 2 == 1){
        sum--;
    }
    cout << sum;
} 
