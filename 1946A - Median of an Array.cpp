#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    int n,t,m,k,c;
    vector<int>v,x,o;
    cin >> t;
    while(t--){
      cin >> n;
      for(int i=1;i<=n;i++){
      	cin >> m;
      	v.push_back(m);
      }
      // if(n==1)
      // 	cout << '1' << endl;
      // else{
      sort(v.begin(),v.end());
      	k=0,c=0,m=0;
      	if(n%2==0){
      		k=n/2;
            m=v[k-1]+1;
         }
      	else{
      		k=(n/2)+1;
            
            m=v[k-1]+1;
         }
         for(int i=(k-1);i<n;i++){
         	
         	if(v[i]<m){
         		c++;
         	}
         	
         }
         cout << c << endl;
         v.clear();
      }
      
         
     
  return 0;
}
