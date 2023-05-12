#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();
 
ll a[1000000];
vector<int> is;
vector<int> js;
 
int main() {
    int n;
    ll k;
    cin >> n;
    cin >> k;
    a[0] = k;
    for (int i = 1; i < n; i++) {
        ll k;
        cin >> k;
        a[i] = k + a[i-1];
    }
    ll total = a[n-1];
    ll third;
    if (total % 3 != 0){
        cout << 0;
        return 0;
    }
    else{
        third = total / 3;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == third){
            is.push_back(i);
        }
        if (i > 1 && total - a[i-1] == third){
            js.push_back(i);
        }
    }
    ll sum = 0;
    ll t = js.size();
    int j = 0;
    for (int i = 0; i < is.size(); i++) { 
        while(js.size() > j && is[i] + 1 >= js[j]){
            j++;
            t--;
        }
        sum += t;
    }
    cout << sum;
    return 0;
}
