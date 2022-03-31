// AryamanBhagat 
// 2022-03-31 
// 20:05:17

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
        string s;
        cin >> s;
        int i = 0;
        int del = 0;
        int n = s.length();
        char current;
        map<char, int> seen;

        while(i < n)
        {
            current = s[i];
            if(i == n-1)
            {
                del++;
                i++;
            }
            else if(s[i] == s[i+1])
            {
                i+=2;
            }
            else 
            {
                seen.clear();
                int j = i+1;
                while(j < n && seen.find(s[j]) == seen.end() && s[j] != current)
                {
                    seen[s[j]] = j;
                    j++;
                }
                if(j == n)
                {
                    del += n-i;
                    i = n; 
                }
                else if(s[j] == current)
                {
                    del += (j-i)-1;
                    i = j+1;
                }
                else
                {
                    del+=seen[s[j]]-i;
                    i = seen[s[j]];
                }

            }
        }
        cout << del << "\n";
    }
    return 0;
}