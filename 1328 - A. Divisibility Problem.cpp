#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    long long  a ,b,temp,c;
    cin >> t;
    while(t--){
    	cin >> a >> b ;
       if(a%b==0) cout<<0<<endl;
       else cout << b - (a%b) <<endl;
    }  
  return 0;
}
