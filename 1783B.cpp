#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> v;
        int n;
        cin >> n;
        for (int j = 0; j < n * n; j++) {
            if (j % 2 == 0){
                v.push_back(j + 1 - j/2);
            }
            else{
                v.push_back(n * n - j + ((j+1)/2));
            }
        }
        for (int j = 0; j < n; j++) {
            if(j % 2 == 0){
                for (int k = 0; k < n; k++) {
                    cout << v[n*j + k] << " ";
                }
            }
            else{
                for (int k = n-1; k >= 0; k--) {
                    cout << v[n*j + k] << " ";
                }
            }
           cout << "\n";

        }
    }
    return 0;
}
