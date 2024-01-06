#include <bits/stdc++.h>
using namespace std;

int sameyear(int y){//check wheither the year is distinct or not
       int temp=y;
       vector<int>v(10,0);
       while(temp!=0){
          int d = temp%10;
          if(v[d]!=0) return 0;
          v[d]=1;
          temp=temp/10;
       }
       return 1;
}


int main ()
{
   int y;
   cin >> y;
   int m=y+1;
   while(m){
      int f =  sameyear(m);
      if(f==1){
        cout<<m<<endl;
        break;
      }
      else{
        m++;
      }
   }
  

return 0;
}
