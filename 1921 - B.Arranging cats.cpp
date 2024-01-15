#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >>n;
    while(n--){
    	int t;
    	cin >> t;
    	string s , f;
    	cin >> s >> f;
    	int c =0,k = 0,m=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]=='1'&&f[i]=='1'||s[i]=='0'&&f[i]=='0') m=0;
    		else if(s[i]=='1'&&f[i]=='0'){
    			c++;

    		}
    		else if(s[i]=='0'&&f[i]=='1'){
    			k++;
    		}
    	}
    	if(m==0&&k==0&&c==0) cout << m <<endl;
    	else{
    		if(c>k) cout << c << endl;
    		else if(c==k) cout << c <<endl;
    		else if(c<k) cout << k << endl;
    	}
    }  
  return 0;
}
