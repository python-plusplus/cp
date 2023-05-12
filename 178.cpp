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
        int a = 1;
        int b = 2 * n;
        int c = 0;
        int d = 2;
        int e = 1;
        cout << "Yes" << "\n";
        for (int i = 0; i < n; i++) {
            cout << a << " " << b << "\n";
            a++;
            if (c == )
            b++;
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
