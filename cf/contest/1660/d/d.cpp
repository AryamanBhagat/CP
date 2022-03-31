// AryamanBhagat 
// 2022-03-31 
// 20:05:17

#include <bits/stdc++.h>

using namespace std;


    
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
        long long largest;
        //cout << "hello";



        int global_end = n;
        int global_start = -1;
        int start = -1;
        int end = n;
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(!a[i])
            {
                int j = i+1;
                while(j < n && a[j] != 0)
                {
                    j++;
                }

                long long temp;
                int firstNeg = -1;
                int lastNeg = -1;
                long long int preMult = 1;
                long long int postMult = 1;
                long long total = 1;

                for(int x = i; x < j;x++)
                {
                    postMult = postMult * a[x];
                    total =  total * a[x];
                    
                    if(firstNeg == -1)
                        preMult *= a[x];
                    
                    if(a[x] < 0)
                    {
                        lastNeg = x;
                        global_end = x;
                        if(firstNeg == -1)
                        {
                            firstNeg = x;
                            global_start = x;
                        }
                            
                        postMult = a[x];
                    }
                }
                
                cout << preMult << " " << postMult << '\n';
                if(total > 0)
                {
                    global_start = i-1;
                    global_end = j;
                    temp =  total;
                }
                cout << preMult << " " << postMult << " \n";
                if(postMult > preMult)
                {
                    global_start = i-1;
                    temp = total/postMult;
                }
                else
                {
                    global_end = j;
                    temp = total/preMult;
                }

                if(temp > largest)
                {
                    largest = temp;
                    start = global_start;
                    end = global_end;
                }
                i = j;
            }
        }
        cout << start+1 << " " << n - end << "\n";
    }
    return 0;
}