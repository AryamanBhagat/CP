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
        int m = 0; 
        for(int i = 0; i <n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        int complete = 0;
        int ones = 0;
        int twos = 0;
        for(int i = 0; i <n; i++)
        {
            int temp = m-a[i];
            complete += 2*(temp/3);
            if(temp%3 == 1)
                ones++;
            else if(temp%3 == 2)
                twos++;
        }

        bool moreOnes = ones > twos;
        int x = min(ones, twos);
        int y = max(ones, twos)-x;
        cout << complete << " " << ones << " " << twos << "\n";
        cout << x << " " << y << " " << moreOnes << " \n";

        cout << (complete + ((x*2) + (y*2))) - moreOnes << "\n";
        
    }
    return 0;
}