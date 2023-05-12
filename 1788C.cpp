#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(int n){
    if (n % 2 == 0){
        cout << "No" << "\n";
    }
    else{
        int dec = 1;
        int a = 1;
        int b = 2 * n - (floor((n-2)/2) );
        cout << "Yes" << "\n";
        for (int i = 0; i < n; i++) {
            cout << a << " " << b << '\n';
            a++;
            b++;
           if (b > 2 * n){
                b = n + 1;
            }
        }

    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
