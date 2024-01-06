#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
   
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	 int c=0,j=0;
    	for(int i=0;i<n;i++){
    		if(s[i]=='+'){
    			c++;
    		}
    		else {
    			j++;
    		}
    	}
    	if(c>0 && j == 0) cout << c  <<endl;
    	else if(j>0 && c == 0) cout << j << endl;
    	else cout << abs(c-j) <<endl;
    }

  return 0;
}
