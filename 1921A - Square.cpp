#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,a,b;
    vector<int>v;
    cin >> t;
    int k=0;
    while(t--){

        for(int i=0;i<8;i++){
            cin >> a ;
            v.push_back(a);
        }
        b=1;
        for(int i=k;i<v.size();i=i+2){
            for(int j=i+2;j<v.size();j=j+2){
                if(v[i]==v[j]){
                  b=b*abs(v[i+1]-v[j+1]);
                }
            }
        }
        k=k+8;
        cout << b <<endl;
    }  
  return 0;
}
