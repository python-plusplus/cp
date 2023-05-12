#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

int gcd(int a, int b){
    int mc = 1;
    for (int i = 1; i <= min(a,b); i++) {
        if (a % i == 0 && b % i == 0){
            mc = i; 
        }
    }
    return mc;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float j = ((float) a / b);
    float k = ((float) c / d);
    int f = gcd(a*d, c*b);
    if (j > k){
        // vertial meet;
        // cb / ad
        cout << (a*d / f) - c*b / f << '/' << a*d / f;
    }
    else if (j < k){
        // horizontal meet;
        // ad /cb
        cout << (c * b / f) - a*d / f << '/' << c*b / f;

    }
    else{
        cout << 0 << '/' << 1;
        return 0;
    }
    return 0;
}
