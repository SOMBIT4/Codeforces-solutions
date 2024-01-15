#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string s1;
  string s2;
  string s3;
  cin >> s1 >> s2;
  s3.resize(s1.size());
  for(int i=0;i< s1.size();i++){
    if(s1[i]==s2[i]){
        s3[i]='0';
    }
    else{
      s3[i]='1';
    }
  }
  cout << s3 << endl;
  return 0;
}
