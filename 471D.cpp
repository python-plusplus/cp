#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

void print_vec(vector<auto> vec){
    for (auto it : vec){
        cout << it << ' ';
    }
    cout << nl;
}

int v[200005];
int u[200005];
int lps[200005];

int main() {
    int n, w;
    cin >> n >> w;
    int prev;
    cin >> prev;
    for (int i = 0; i < n-1; i++) {
        int k;
        cin >> k;
        v[i] = (k-prev);
        prev = k;
    }

    if (w == 1){
        cout << n;
        return 0;
    }
    cin >> prev;
    for (int i = 0; i < w-1; i++) {
        int k;
        cin >> k;
        u[i] = (k-prev);
        prev = k;
    }
    if (n - 1 < w- 1){
        cout << 0;
        return 0;
    } 

    //Using KMP algo
    //preprocess lps
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < w-1) {
        if (u[len] == u[i]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if (len != 0){
                len = lps[len - 1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    //j keeps track of pattern
    //i keeps track of the whole string
    i = 0;
    int j = 0;
    int count = 0;
    //Now we run thorugh the pattern matching
    while ((n-1 - i)  >= (w-1 - j)){
        if (v[i] == u[j]){
            i++;
            j++;
        }
        //Found a match since j is the same length as pattern
        if (j == w-1){
            j = lps[j - 1];
            count++;
        }
        //We have a mismatch, now we have to change j to the most efficient state.
        else if (n-1 > i && v[i] != u[j]){
            if (j != 0){
                j = lps[j - 1];
            }
            else{
                i++;
            }
        }
    }
    cout << count;
}
