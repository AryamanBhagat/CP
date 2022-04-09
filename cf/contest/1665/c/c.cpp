// AryamanBhagat 
// 2022-04-08 
// 20:05:01

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
        //cout << n << "\n";
        vector<int>graph[n];
        int temp;
        for(int i = 0; i < n-1; i++)
        {
            cin >> temp;
            graph[temp-1].push_back(i+1);
        }
        //make an array of the number of children of each node.
        int numChild[n];
        for(int i = 0; i < n; i++)
        {
            numChild[i] = graph[i].size();
            //cout << numChild[i] << " ";
        }
        //cout <<"\n";
        sort(numChild, numChild+n);
        
        
        int minus = 2;
        int elapsed = 0;
        int m = 0;
        for(int i = 0; i < n; i++)
        {
            if(numChild[i] > 0)
            {
                numChild[i] = max(numChild[i]-minus, 0);
                m = max(m, numChild[i]);
                minus++;
                elapsed++;
            }
        }

        
        // put in multiset, remove largest from multiset, add one 
        multiset<int, greater<int> > ms(numChild, numChild+n);

        int elapsedAfter = 0;
        
        int largestElement = *ms.begin();
        ms.erase(largestElement);
        while(elapsedAfter < largestElement)
        {
            largestElement--;
            ms.insert(largestElement);
            largestElement = *ms.begin();
            elapsedAfter++;
            //take largest from multiset
            //reduce by one
            //add to multiset
            //elapsedAfter++;
        }



        //cout << m  << " " << minus << "\n";
        cout <<  elapsed + 1 + elapsedAfter<< "\n";
    }
    return 0;
}