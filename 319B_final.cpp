#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int dpz = -inf;
int dp = -inf;

int main() {
    int curr = 0;
    int n;
    cin >> n;
    int cm = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (curr == 0){
            if (a >= dpz){
                dpz = a;
            }
            else{
                curr++;
            }
        }
        else{
            if (a < dp){
                curr = 0;
            }
            else{
                curr = cm + 1;
                dp = a;
            }
        }
        cm = max(curr, cm);
    }
    cout << cm;
}
