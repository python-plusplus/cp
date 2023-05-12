#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int e = a % 2;
    if (a % 2 == b % 2){
        if(a % 2 == c % 2){
            ;
        }
        else{
            cout << 3;
            return 0;
        }
    }
    else{
        if (b % 2 == c % 2){
            cout << 1;
            return 0;
        }
        else{
            cout << 2;
            return 0;
        }
    }
    for (int i = 3; i < n; i++) {
        int k;
        cin >> k;
        if (k % 2 != e){
            cout << i + 1;
        }
    }
}
