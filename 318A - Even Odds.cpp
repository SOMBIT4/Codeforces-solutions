#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    ll k,n,c;
    cin >> n >> k;
    if(n%2==0){
    	c=n/2;
    }
    else{
    	c=(n+1)/2;
    }
    if(k<=c){
    	cout << (2*k)-1 << endl;
    }
    else{
    	cout << (k-c)*2 << endl;
    }
  return 0;
}
