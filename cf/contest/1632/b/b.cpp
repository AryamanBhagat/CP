// AryamanBhagat 
// 2022-01-30 
// 20:04:46

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
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        //find largest value of two that it has
        int a[n];
        int dp[n];
        for(int i = 0; i < n; i++)
        {
            dp[i] = 0;
            cin >> a[i];
        }
        long sum = 0;
        dp[0] = a[0] ? 0 : 1;
        for(int i = 1; i < n; i++)
        {
            dp[i] = a[i]?0:1;
            for(int j = i-1; j >= 0; j--)
            {
                dp[i] += dp[j];
            }
            sum += dp[i];
        }
        cout << sum << "\n";
        
    }
    return 0;
}