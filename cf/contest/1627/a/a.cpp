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
    
    
/*
    vectors
    Declarations
    .empty()
    .resize()
    .pushback()
.   pushback() and .resize() interactions
    create vecotrs from other vecotrs
    vector< vector< int > > name(size, vecotr to fill with)
    vector< int > name(size) or vector< int > name(another vector)
    copy of vecotr is passed, unlike array
    
    pair
    pair < type1 , type2 > name
    pair.first
    compairsion of pairs
    
    containers always have end() and begin()
    reverse()
    rbegin() rend()
    used to rtraverse an array in revers order
    ::iterator it = v.begin();
    it++ means next element in the container
    for(vector< int >::iterator it = v.begin(); it != v.end(); it++) {
        *it++; // Increment the value iterator is pointing to
    }/
    max elements data 
    *max_element index
    works same way as array
    erase()
    insert()
    all()
    
    SET
    count             o (1)
    add w/o duples     log n
    remove              log n
    check if present    log n
    
`   dont mess with maps through iterators
    copy
    ascculmulators
    set functions
    string functions
    
    for(it: vec)
        cout << it;
        */
    
    
const int base = 1000000000;
const int base_digits = 9;
    

    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        bool oneBlack = false;
        int exact = 0;
        int row = 0;
        int col = 0;
        char current;
        r--; c--;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> current;
                //cout << current;
                if(current == 'B')
                {
                    oneBlack = true;
                    row += (r == i);
                    col += (c == j);
                    exact += ((c == j) && (r == i));
                }
            }
        }
        if(oneBlack)
        {
            if(exact)
                cout << "0";
            else if(row + col > 0)
                cout << "1";
            else 
                cout << "2";
        }
        else 
            cout << "-1";
        cout << "\n";
    }
    return 0;
}