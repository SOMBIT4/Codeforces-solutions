#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    int x,t,n;
    vector<int>v;
    cin >> t;
    while(t--){
    	cin >> n;
       for(int i=0;i<n;i++){
       	cin >> x;
       	v.push_back(x);
       }
        for(int i = 1; i < n; i++){
        if(v[0] != v[i] && v[i] == v[i+1]){
            cout << '1' << endl;
            break;
        }
        else if(v[0] != v[i]){
            cout << i+1 << endl;
            break;
        }
    }
       v.clear();
    }  
  return 0;
}
