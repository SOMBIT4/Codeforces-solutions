#include <bits/stdc++.h>
#define ll long long int
using namespace std;



//there is pattern each time i will appear like 1 , 2 , 4 , 8 ,..............
int main ()
{
    ll n,t;  
    cin >> t;
    while(t--){
    	cin>>n;
    	ll fpos=1;
    	while(fpos<=n){
    		fpos=2*fpos;
    	}
    	cout << fpos <<endl;
    }
  return 0;
}
