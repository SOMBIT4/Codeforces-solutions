#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,t,x;
    vector<int>a;
    cin >> t;
    while(t--){
       cin >> n;
       for(int i=0;i<n;i++){
       	cin >> x;
       	a.push_back(x);
       }
       int s=0,k=0;
       for(int i=0;i<n;i++){
       	    s=s+a[i];
       	    if(a[i]%3==1)
       	    	k=1;
    
       }
       a.clear();
       if(s%3==0)
       	cout << '0' <<endl;
       else if(s%3==2)
       	cout << '1' <<endl;
       else
       	if(k==1)
       	cout << '1' <<endl;
         else
         	cout<< '2' <<endl;
       
    }  
  return 0;
}