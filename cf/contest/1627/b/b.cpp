// AryamanBhagat 
// 2022-01-15 
// 20:05:04

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
    
    

int manHattanDistance(int a, int b, int m, int l)
{
    return new_max(a-m, m-a) + new_max(b-l, l-b);
}

int cornerDistance(int a, int b, int n, int m)
{
    return new_min(new_min(manHattanDistance(a, b, 0, 0), manHattanDistance(a, b, 0, m)), new_min(manHattanDistance(a,b,n,0), manHattanDistance(a,b,n,m)));
}
    
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m;
        vector<int> v;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                v.push_back(max(i, n-i-1) + max(j, m-j-1));
        sort(v.begin(), v.end());
        for(auto i : v)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}