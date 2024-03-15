#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n,t;
  string s;
  cin >> t;
  while(t--){
  	cin >> n;
    cin >> s;
    int c=0;
    
    for(int i=0 ; i<n ; i++){
    	if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'||s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'){
           c++;
           i=i+2;
    	}
    }
    cout << c << endl;
  }  
  return 0;
}
