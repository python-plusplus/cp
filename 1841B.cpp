#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void solve(){
    int n;
    cin >> n;
    bool used = false;
    int first; 
    cin >> first;
    int prev = first;
    cout << 1;
    if (n == 1){
        cout << nl;
        return;
    }

    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        if (used){
            if (a <= first and a >= prev){
                cout << 1;
                prev = a;
            }
            else{
                cout << 0;
            }
        }
        else{
            if (a >= prev){
                cout << 1;
                prev = a;
            }
            else{
                if (a <= first and !used){
                    used = true; 
                    cout << 1; 
                    prev = a;
                }
                else{
                    cout << 0;
                }
            }
        }
    }
    cout << nl;
    return;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
