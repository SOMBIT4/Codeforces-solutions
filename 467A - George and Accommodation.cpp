#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,p,q,c,d;
    cin >> t;
    c=0;
    while(t--){
    	cin >> p >> q;
        if(p<q){
           d=q-p;
           if(d>=2)
            c++;
        }
        

    }  
    cout << c << endl;
  return 0;
}
