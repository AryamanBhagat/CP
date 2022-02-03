// AryamanBhagat 
// 2022-01-30 
// 20:04:46

#include <bits/stdc++.h>

using namespace std;
#define new_max(x,y) (((x) >= (y)) ? (x) : (y))
#define new_min(x,y) (((x) <= (y)) ? (x) : (y))
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i > l; i--)
    

    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    GCDatIndex[n];
    scenes[n];
    cin >> scenes[0];
    GCDatIndex[0] = scenes[0];
    for(int i = 1; i < n; i++)
    {
        cin >> scenes[i];
        
    }    
    return 0;
}