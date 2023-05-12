#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t; 
    for (int i = 0; i < t; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == 0){
            cout << min(1, max(max(b, c), d)) << "\n";
        }
        else{
            if (a >= max(c,b)){
                int n = abs(a - max(c,b));
                cout << a + b + c + min(n + 1, max(max(b,c), d)) << "\n";
            }
            else{
                cout << a + 2 * min(c,b) + min(1, max(max(b,c) ,d)) << "\n"; 
            }
        }

    }
    return 0;
}
