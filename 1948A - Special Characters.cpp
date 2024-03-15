#include <bits/stdc++.h>
using namespace std;

int main ()
{
   
   int x,t;
   string s;
   char k;
   cin >> t;
   while(t--){
      cin >> x;
      if(x>1){
      	if(x%2==0){
           cout <<"YES"<<endl;
           s.resize(x);
           k='A';
           for(int i=0;i<x;i=i+2){
               s[i]=k;
               s[i+1]=k;
               k++;
           }
           cout << s <<endl;
           s.clear();
       }
       else{
       	   cout <<"YES"<<endl;
           s.resize(x+1);
           k='A';
           for(int i=0;i<(x+1);i=i+2){
               s[i]=k;
               s[i+1]=k;
               k++;
           }
           cout << s <<endl;
           s.clear();
       }
      }
      else
      	cout<< "NO" <<endl;
   }  
  return 0;
}
