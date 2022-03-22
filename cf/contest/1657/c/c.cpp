// AryamanBhagat 
// 2022-03-22 
// 20:15:13

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
    
    
bool palindrome(string s, int i, int j)
{
    if(j == i)
    {
        return true;
    }
    else if(j-i == 1)
    {
        return s[j] == s[i];
    }
    else 
    {
        return s[j] == s[i] && palindrome(s, i+1, j-1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int i = 0;
        int j = 0; 
        int lbr = s[0] == '(' ? 1 : -1;
        int c = 0;
        bool windowCanBeBalanced = lbr > 0;
        //cout << lbr << '\n';
        //string currentString = s.substr(0, 1);
        //string currentReverseString = s.substr(0, 1);
        for(j = 1; j < n; j++)
        {

            lbr += s[j] == '(' ? 1 : -1;
            //currentString = currentString + s[j];
            //currentReverseString = s[j] + currentReverseString;
            //cout << currentString << " " << currentReverseString << " \n";
            if(windowCanBeBalanced)
            {
                //cout << "asdfgasdfg " << lbr << endl;
                if(!lbr)
                {
                    //cout << "here\n";
                    c++;
                    i = j+1;
                    j++;
                    if(i < n)
                    {
                        lbr = s[i] == '(' ? 1 : -1;
                        windowCanBeBalanced = lbr > 0;
                        //currentString = s.substr(i, 1);
                        //currentReverseString = s.substr(i, 1);
                    }
                    continue;
                }
            }
            //check if the current window is a palindrome
            if(palindrome(s, i, j))
            {
                c++;
                i = j+1;
                j++;
                if(i < n)
                {
                    lbr = s[i] == '(' ? 1 : -1;
                    windowCanBeBalanced = lbr > 0;
                    //currentString = s.substr(i, 1);
                    //currentReverseString = s.substr(i, 1);
                }
            }
        }   
        cout << c << " " << n-i << '\n';
    }
    return 0;
}