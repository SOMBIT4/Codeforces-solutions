#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int x,t;
  vector<int>a;
  cin >> t;
  while(t--){
      for(int i=0;i<4;i++){
        cin >> x;
        a.push_back(x);
      }

      int c = 0;
      for(int i=1;i<4;i++){
        if(a[i]>a[0]) c++;
      }
      cout << c << endl;
      a.clear();
  }  
  return 0;
}
