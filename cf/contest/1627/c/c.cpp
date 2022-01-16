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
    


    
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a[n];
        bool impossible = false;
        int us[n-1];
        int vs[n-1];
        for(int i = 0 i < n-1; i++)
        {
            int u, v;
            cin >> u >> v;
            a[u-1].push_back(v-1);
            a[v-1].push_back(u-1);
            if(a[u-1].size()>2 || a[v-1].size()>2)
                impossible = true;
            us[i] = u-1;
            vs[i] = v-1;
        }



    }
    return 0;
}