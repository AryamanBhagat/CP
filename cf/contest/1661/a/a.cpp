// AryamanBhagat 
// 2022-04-09 
// 20:05:05

#include <bits/stdc++.h>

using namespace std;
#define new_max(x,y) (((x) >= (y)) ? (x) : (y))
#define new_min(x,y) (((x) <= (y)) ? (x) : (y))
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i > l; i--)
    
typedef vector< int > vi; //int vector
typedef pair< int,int > ii; //pair of ints
#define sz(a) int((a).size()) //size int int
#define pb push_back        //pushback useful for vector
#define all(c) (c).begin(),(c).end()   //r/aww
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
    
const int MOD1 = (int)1e9 + 7;
const int MOD2 = (int)1e9 + 9;
const int MOD3 = 998244353;
    
const double pi = atan2(0, -1);
    
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int dp[n][2];
        rep(i, 0, n)
            cin >> a[i];
        rep(i, 0, n)
            cin >> b[i];
        
        dp[0][1] = 0;
        dp[0][0] = 0;
        for(int i = 1; i < n; i++)
        {
            int one = abs(a[i] - a[i-1]);
            int two = abs(b[i] - b[i-1]);
            int three = abs(a[i] - b[i-1]);
            int four = abs(b[i] - a[i-1]);
            //sum += min(one + two, three + four);

            dp[i][0] = min((one + two) + dp[i-1][0], three + four + dp[i-1][1]);
            dp[i][1] = min((one + two) + dp[i-1][1], three + four + dp[i-1][0]);
            
        }
        //cout << abs( 2-3) << " |asdfasdfa\n";
        cout << max(dp[n-1][0], dp[n-1][1]) << "\n";
    }
    return 0;
}