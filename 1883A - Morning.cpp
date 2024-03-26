#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,n,temp,d,c,i,j,k;
   // vector<int>v(0,4);
    cin >> t;
    while(t--){
         cin >> n;
         temp = n;
         int v[4] = {0};
         i=3,j=4;
         while(j){
         	j--;
         	k=temp%10;
         	if(k==0){
         		v[i]=10;
         	}
         	else{
         		v[i]=k;
         	}
         	i--;
         	
         	temp=temp/10;
         }
         c=0;
         for(int j=0;j<4;j++){
               if(j==0){
               	   d=abs(v[j]-1);
               	   if(d==0)
               	   	c++;
               	   else
               	   	c=c+d+1;
               }
               else{
                    d=abs(v[j]-v[j-1]);
               	   if(d==0)
               	   	c++;
               	   else
               	   	c=c+d+1;
              }
         }
         cout << c << endl;
    }  
  return 0;
}
