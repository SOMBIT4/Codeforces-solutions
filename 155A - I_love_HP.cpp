#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
    int t,x,max,min,c;
    vector<int>v;
    cin >> t;
    for(int i=0;i<t;i++){
    	cin >> x;
    	v.push_back(x);
    }
    max=v[0];
    min=v[0];
    c=0;
    for(int i=1;i<v.size();i++){
       if(v[i]>max){
       	max=v[i];
       	c++;
       }
       else if(v[i]<min){
       	min= v[i];
       	c++;
       }
    }
    cout << c << endl;
    v.clear();
  return 0;
}
