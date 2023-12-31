#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

const int maxn = 200005;

bool dead[maxn + 1];
bool neg[maxn + 1];

void solve(){
    string s;
    cin >> s;
    ll ans = 0;
    int dA = 0;
    int dB = 0;
    int dC = 0; 
    int dD = 0;
    int dE = 0;
    for (int i = 1; i <= n; i++) {
        int j = n - i;
        char c = s[j];
        if (c == 'A'){
            if (dE + dD + dC + dB >= 2){
                dead[j] = true;
                neg[j] = true;
                ans--;
            }
            else if (dE + dD + dC + dB >= 1){
                dead[j] = false;
                neg[j] = true;
                ans--;
            }
            else{
                dead[j] = false;
                neg[j] = false;
                ans++;
            }
            dA++;

        }
        else if(c == 'B'){
            if (dE + dD + dC >= 2){
                dead[j] = true;
                neg[j] = true;
                ans -= 10;
            }
            else if (dE + dD + dC >= 1){
                dead[j] = false;
                neg[j] = true;
                ans -= 10;
            }
            else{
                dead[j] = false;
                neg[j] = false;
                ans += 10;
            }
            dB++;
        }
        else if(c == 'C'){
            if (dE + dD >= 2){
                dead[j] = true;
                neg[j] = true;
                ans -= 100;
            }
            else if (dE + dD >= 1){
                dead[j] = false;
                neg[j] = true;
                ans -= 100;
            }
            else{
                dead[j] = false;
                neg[j] = false;
                ans += 100;
            }
            dC++;
        }
        else if (c == 'D'){
            if (dE >= 2){
                dead[j] = true;
                neg[j] = true;
                ans -= 1000;
            }
            else if (dE >= 1){
                dead[j] = false;
                neg[j] = true;
                ans -= 1000;
            }
            else{
                dead[j] = false;
                neg[j] = false;
                ans += 1000;
            }
            dD++;
        }
        else{ 
            neg[j] = false;
            dead[j] = false;
            dE += 1;
            ans += 10000;
        }
    }

    unordered_map<char, int> let = {'A' : 0, 'B' : 1, 'C' : 2, 'D' : 3, 'E' : 4};
    int in[4] = {0, 0, 0, 0}; 
    int de[4] = {0, 0, 0, 0};
    ll curr = 0;
    for (int i = 0; i < n; i++) {
        char c = s[i];
    }
}

int main() {
   int t; 
   cin >> t;
   for (int i = 0; i < t; i++) {
       solve();
       
   }
}
