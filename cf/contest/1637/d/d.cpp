// AryamanBhagat 
// 2022-02-24 
// 12:02:58

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
    
int sqr(int x)
{
    return x*x;
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        int sumMin = 0, sumMax = 0, sumSq = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i])
                swap(a[i], b[i]);
    
            sumSq += sqr(a[i]) + sqr(b[i]);
            sumMin += a[i];
            sumMax += b[i];
        }

        bitset<(100*100) + 10> dp;
        dp[0] = 1;
        for (int i = 0; i < n; i++)
            dp |= dp << (b[i] - a[i]);

        int ans = sqr(sumMin) + sqr(sumMax);
        for (int i = 0; i <= sumMax - sumMin; i++)
            if (dp[i])
                ans = min(ans, sqr(sumMin + i) + sqr(sumMax - i));
    
        cout << sumSq * (n - 2) + ans << '\n';
        
    }
    return 0;
}