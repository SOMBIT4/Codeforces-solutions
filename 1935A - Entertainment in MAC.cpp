#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    ll n,t;
    string s,x,y;
    cin >> t;
    while(t--){
    	cin >> n;
        cin >> s;
        x.resize(s.size());
        for(int i=0;i<s.size();i++){
               x[i]=s[i];
        }
        reverse(x.begin(),x.end());
        x+=s;
        s=min(s,x);
        cout<<s<<endl;
    }  
  return 0;
}
