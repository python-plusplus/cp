#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;

void solve(){
    v.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    if (v[n-1] != 0){
        cout << "NO" << nl;
        return;
    }
    bool start = false;
    bool one = false;
    int c = 0;
    string cStr = "";
    cout << "YES" << nl;
    for (int i = n-1; i >= 0; i--) {
        if (v[i] == 0 && start == false && one == false){
            start = true;
        }
        else if(v[i] == 0 && start == true && one == false){
            cout << 0 << ' ';
        }
        else if (v[i] == 1 && one == false){
            c++;
            cStr = "0 " + cStr; 
            one = true;
        }
        else if (v[i] == 1 && one == true){
            c++;
            cStr = "0 " + cStr;
        }
        else if (v[i] == 0 && one == true){
            cStr = cStr + to_string(c) + ' ';
            cout << cStr;
            one = false;
            cStr = "";
            c = 0;
        }
    }
    cStr = cStr + to_string(c);
    cout << cStr;
    one = false;
    start = false;
    cStr = "";
    c = 0;
    cout << nl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
