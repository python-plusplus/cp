#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int j = n + m - 2;
    if (k >= j && (k - j) % 2 == 0){
        cout << "YES" << '\n' ;
        string l = "R ";
        string l2 = "B ";
        string l4;
        int b = (m-1) / 2;
        while(b--){
            l4 += "R B ";
        }
        int a = m-2;
        while (a--){
            l += "R "; 
            l2 += "B ";
        }
        for (int i = 0; i < n; i++){
            if (i == 0 && m > n){
                if (m % 2 == 0) l4 += "R";
                cout << l4 << '\n';
            }
            else if (i == n - 1 && m == n){
                if (m % 2 == 0) l4 += "R";
                cout << l4 << '\n';
            }
            else{
                cout << l << '\n';
            }
        }
        if (n > m){
            for (int i = 0; i < n-1; i++){
                if (i % 2 == 0) cout << "R ";
                else cout << "B ";
                cout << l2 << '\n';
            }
        }
        else{
            for (int i = 0; i < n-1; i++){
                cout << "B " + l2 << '\n';
            }
        }
        
        return;
    }
    cout << "NO" << '\n';
    return;
}

int main() {
   int t;
   cin >> t;
   while (t--){
       solve();
   }
}
