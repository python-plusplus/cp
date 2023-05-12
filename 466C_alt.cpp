#include <iostream>
 
using namespace std;
 
long long a[1000005];
int main() { 
    int n;
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1]; 
    }
    if (a[n] % 3 != 0) {
        cout << "0";
        return 0;
    }
    long long s = a[n] / 3;
    long long ss = s * 2;
    long long ans = 0;
    long long cnt = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] == ss)
            ans += cnt;
        if (a[i] == s) 
            ++cnt;
    }
    cout << ans;
    return 0;
}
