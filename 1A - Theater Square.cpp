#include <bits/stdc++.h>
using namespace std;

int main ()
{
   int n,m,a,c,r;
   cin >> n >> m >> a;
   if(n%a==0){
   	c = n/a;
   	
   }  
   else {
   	c = (n/a)+1;

   }
   if(m%a==0){
   	r=m/a;
   }
   else{
   	r=(m/a)+1;
   }
   
   cout<<(c*r)<<endl;
  return 0;
}
