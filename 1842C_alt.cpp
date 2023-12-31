#include <bits/stdc++.h>
#define nl '\n'

using namespace std;
typedef long long ll;
int inf = numeric_limits<int>::max();
long long llinf = numeric_limits<long long>::max();

//Stealing tourist's solution to see how it works
int main() {
    //standard stuff
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        //initializing vector with all the elements
        //Neat trick to initialize with size although looking it up it's not actually recommended because the array elements are initialized to default contructors?
        //
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        const int inf = (int) 1e9;
        //Initializing dp array
        vector<int> dp(n + 1, -inf);
        dp[0] = 0;
        for (int i = 0; i < n; i++) {
            int v = dp[a[i]];
            //Store the oldest seen instance of the number we just got, and store it's position relative to the beginning position, which changes based on how much we have already deducted.
            //So for example if we have 1 2 3 3 3 3 2 4 
            //Then by the time we we get to 4, it's position will not be stored as -7, but instead it'll be stored as -1, since our current starting position is last 2 we just saw, aka the 2 at position 6.
            //So every time we see a number that we already saw, we just check if the segment we cut out is larger than the existing largest segment we have cut out. 
            //So for example, when we see the 2nd 2, our dp[0] is 4, since we have cut out the segment of 3s which is of size 4. And since the last 2 that we saw was at -1, and the second 2 we see is at
            //position i = 6, 6 - 1 + 1, which is 6, so the largest "cut out" segment becomes 6. 
            //It feels like there are holes, like how we can just ignore anything that comes before the 2, like the 1 at the start, so after we cut out the 2 segment, why is the starting position 6, even
            //though we didnt cut out the 1? Well it actually doesn't matter when we're cutting out more segments after the 2. Because those are all cuts after the 2 segment, and we have already stored the
            //position of the 1. So any new cuts will not be affected by the 1 here. 
            //
            //And for cases where you have multiple segments you cut out, you don't have to worry about it since you are effectively keeping track, of what you ARENT including in the final sum. 
            //
            //For example, if you have 3 3 5 4 4
            //Then you know that in dp[4], you will have -1. Meaning that the oldest place you've
            //seen the 4, you have to omit 1 from the final sum because of that stray 5 in between the segments. 
            //So since the second 4 is at i = 5, dp[0] becomes 5 (- 1) = 4.
            //What genius algo holy man.
            dp[a[i]] = max(dp[a[i]], dp[0] - i);
            dp[0] = max(dp[0], v + i + 1);

            //adding this to see what's going on 
            for (int i = 0; i < n; i++) {
               cout << dp[i]  << ' ';
            }
            cout << '\n';
            for (int i = 0; i < n; i++) {
                cout << a[i]  << ' ';
            }
            cout << '\n';
        }
        cout << dp[0] << '\n';
    }
    return 0;
}
