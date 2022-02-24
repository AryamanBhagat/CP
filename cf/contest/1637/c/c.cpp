// AryamanBhagat 
// 2022-02-24 
// 11:40:48

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
        int a[n];
        bool allOnes = true;
        int ones = 0;
        int twos = 0;
        long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            
            if(i > 0 && i < n-1)
            {
                sum += (a[i] +1)/2;
                if(a[i] != 1)
                {
                    allOnes = false;
                }
            }
        }
        if(n == 3 && a[1]%2 == 1)
        {
            cout << "-1";
        }
        else if(allOnes)
        {
            cout << "-1";
        }
        else
        {
            cout << sum;
        }
        cout << "\n";

    }
    return 0;
}