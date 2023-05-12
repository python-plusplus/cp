#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> v;

longest consecutive sorted sequence
int main() {
    int n, h, l, r;
    cin >> n >> h >> l >> r;
    v.push_back(0);
    bool found = false;
    int t = 0;
    int q = 0;
    for (int i = 0; i < h; i++) {
        int m;
        cin >> m;     
        t =  (t + m) % h;
        found = false;
        for (int j = v.size-1; j >= 0; j--) {
            v[j]++;
            if (!found){

            }
        }
    }
}
