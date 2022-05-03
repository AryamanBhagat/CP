// AryamanBhagat 
// 2022-05-03 
// 15:35:05

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
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minShots = INT_MAX;
    priority_queue <int, vector<int>, greater<int>> na;
    
    for(int i = 0; i < n; i++)
    {
        na.push(a[i]/2 + a[i]%2);
        //cout << "hello";
        if(i-1 >= 0)
        {
            int shots = countShots(a[i], a[i-1]);
            minShots = min(shots, minShots);
        }
        
        if(i+1 < n)
        {
            int shots = countShots(a[i], a[i+1]);
            minShots = min(shots, minShots);
        }
        
        if(i-1 >= 0 && i + 1 < n)
        {
            int shots = max(a[i-1], a[i+1]);
            minShots = min(minShots, shots);
        }
    }
    int t = na.top();
    na.pop();
    cout << min(na.top() + t, minShots) << "\n";
    return 0;
}