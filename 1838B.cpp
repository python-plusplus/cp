#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

//replace the smallest(closest) working number with the furthest number
//if the furthest number is the closest working number than just do nothing

void solve(){
    int n;
    cin >> n;
    vector<int> v;
    int oneIndex;
    int furthestIndex;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        if (a==1) oneIndex = i;
    }
    if (n % 2 == 1 && oneIndex == n/2){
        if (v[0] > v[n-1]){
            furthestIndex = 0;
        }
        else{
            furthestIndex = n-1;
        }
    }
    else if(oneIndex >= n/2){
        furthestIndex = 0;
    }
    else{
        furthestIndex = n - 1;
    }
    int i = 0;
    ll left = 0;
    ll right = 0;
    ll tracker = 0;
    int f;
    if (v[0] > v[n-1]){
        f = 0;
    }
    else{
        f = n-1;
    }
    if (n == 3){
        if (v[1] == 3){
            cout << "1 1" << nl;
            return;
        }
        else{
            cout << find(v.begin(),v.end(), 3) - v.begin() + 1 << ' ' << 2 << nl;
            return;
        }
    }
    while (true){
        tracker += i + 1;
        if (oneIndex - i < 0 and oneIndex + i >= n){
            cout << 1 << ' ' << 1 << nl;
            return;
        }
        if (oneIndex + i < n){
            right += v[oneIndex + i];
        }

        if (oneIndex - i >= 0){
            left += v[oneIndex - i];
        }  
        if ((left == tracker or right == tracker) and i != abs(oneIndex - f)){    
            cout << f + 1 << ' ' << find(v.begin(), v.end(), i+1) - v.begin() + 1 << nl;
            return;
        }
        i++;
   }
}

int main() {
   int t;
   cin >> t;
   for (int i = 0; i < t; i++) {
       solve();
   }
}
