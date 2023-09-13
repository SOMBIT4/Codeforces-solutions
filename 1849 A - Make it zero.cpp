#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,t;
    cin >> t;
    while(t--){
    	cin >> n;
    	int a[n];
    	for(int i = 0;i<n;i++){
    		cin >> a[i];
    	}
    	int o=0;
    	if(n%2==0){ // zor of even numbers are zero 
    		o = o+2;
    		cout << o << endl;
    		cout << "1 " << n << endl;
    		cout << "1 " << n << endl;// after creating zor putting that value from staring to start and doing same operations
    	
    	}
    	else {
    		o = o+4;
    		cout << o << endl;
    		cout << "1 " << (n-1) << endl;
    		cout << "1 " << (n-1) << endl;
    		cout << (n-1) << " "<<n << endl;
    		cout << (n-1) << " "<<n << endl;
    	}
    }
  return 0;
}
