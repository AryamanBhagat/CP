// AryamanBhagat 
// 2022-01-30 
// 20:04:46

#include <bits/stdc++.h>

using namespace std;
#define new_max(x,y) (((x) >= (y)) ? (x) : (y))
#define new_min(x,y) (((x) <= (y)) ? (x) : (y))

    

    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        
        int a, b;
        cin >> a >> b;
        //either add a to bring it up to look like b then or
        //or add b to bring it up to look like a then or
        int counter = 0;
        int a_temp = a;
        while(a_temp > 0)
        {
            counter++; 
            a_temp/=2;
        }
        counter++;
        //cout << "counter" << counter << "\n";
        int b_temp = b&((1<<(counter-1))-1);
        //cout << "btemp " << b_temp << "\n";
        if(b > b_temp)
        {
            if (b == b_temp + (1<<(counter-1)))
            {
                //cout << "here ";
                cout << new_min(new_max(b_temp-a, a-b_temp)+1, b-a);
            }
            else
            {
                //cout << "here ";
                cout << new_min(1+new_max(b_temp-a, a-b_temp), b-a);
            }
        }
        else
        {
            cout << new_min(b-a, 1 + a + (1<<(counter+1) - b));
        }
        cout << "\n";
    }    
    return 0;
}