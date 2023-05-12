#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> m; 
    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        if (m.count(k) > 0){
            cout << k + to_string(m[k]) << "\n";
            m[k]++;
        }
        else{
            cout << "OK" << "\n";
            m[k] = 1;
        }

    }
}
