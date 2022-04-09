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
    
    


int m[32800];

int solve(int n, int * m)
{

    if(m[n] == -1)
    {
        return m[n] = min(solve((n+1)%32768, m), solve((2*n)%32768, m));
    }
    else
    {
        return m[n];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout << "hello";
    //vector <int> m(32800, -1);
    rep(i, 0, 32800)
        m[i] = -1;
    m[0] = 0;
    int n;
    cin >> n;
    //cout << "hellp";
    rep(i, 0, n)
    {
        int temp;
        cin >> temp;
        cout << solve(temp, m) << " ";

    }
    return 0;
}