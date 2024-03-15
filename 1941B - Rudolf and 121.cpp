#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x,n,t;
    vector<int>a;
    cin >> t;
    while(t--){
       cin >> n;
    for(int i=0;i<n;i++){
    	cin >> x;
    	a.push_back(x);
    }
    for(int i=0;i<n-2;i++){
    	if(a[i]>=0){
    	int temp = a[i];
    	a[i]-=temp;
    	a[i+1]-=(2*temp);
    	a[i+2]-=temp;
    }
    else break;  
    }
    int c=count(a.begin(),a.end(),0);
    
    if(c==n) cout << "YES"<<endl;
    else cout << "NO" <<endl;
    a.clear();
    }  
  return 0;
}
