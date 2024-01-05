#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;
    vector<int>h,g;
   cin >> t;
   while(t--){
       int a , b;
      
       cin >> a >> b;
       h.push_back(a);
       g.push_back(b);
   }
   int c=0;
   for(int i=0;i<h.size();i++){
       for(int j=0;j<g.size();j++){
           if(h[i]==g[j]) c++;
       }
   }
   cout <<c<<endl;
}