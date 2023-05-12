#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t; 
    for (int i = 0; i < t; i++){
        int n;
        int a = 0;
        int b = 0;
        cin >> n;
        for (int j = 0; j < n; j++){
            int k;
            cin >> k;
            if (k == 1){
                a++;
            }
            else{
                b++;
            }
        }
        cout << b + a / 2 + a % 2 << "\n";
        
    }
    return 0;
}
