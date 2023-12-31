#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

vector<int> dp;
int main() {
    int n;
    int curr = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        dp.push_back(inf);
    }
    pair<int, int> m = {-1, -inf};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a; 
        if (m.first == 0){
            if (m.second > a){
                m.first++;
            }
            m.second = a;
        }
        else{
            if (m.second <= a){
                m.first++;
                for (int j = m.first + 1; j < n; j++) {
                    if (dp[j] <= a){
                        m.first++;
                        dp[j] = a;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                m.first = max(1, m.first - 1);
            }
        m.second = a;
        dp[m.first] = m.second;
        curr = max(curr, m.first);
        }
    }
    cout << curr;
}
