#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
 
vector<pair<long long, long long>> arr;
int main() {
    int n, cnt = 0;
    long long x, y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        arr.push_back({x, y});
        if (x == 0 || y == 0) 
            cnt += 4;
        else 
            cnt += 6;
    }
 
    sort(arr.begin(), arr.end(), [](const auto &a, const auto &b) 
    {
        return pow(a.first, 2) + pow(a.second, 2) < pow(b.first, 2) + pow(b.second, 2);
    });
 
    cout << cnt << "\n";
    for (int i = 0; i < n; ++i) {
        x = arr[i].first;
        y = arr[i].second;
        if (x != 0) 
            cout << 1 << " " << abs(x) << (x < 0 ? " L\n" : " R\n"); 
        if (y != 0)
            cout << 1 << " " << abs(y) << (y > 0 ? " U\n" : " D\n"); 
        cout << 2 << "\n";
        if (x != 0) 
            cout << 1 << " " << abs(x) << (x > 0 ? " L\n" : " R\n"); 
        if (y != 0)
            cout << 1 << " " << abs(y) << (y < 0 ? " U\n" : " D\n");
        cout << 3 << "\n"; 
    }
    return 0;
}
