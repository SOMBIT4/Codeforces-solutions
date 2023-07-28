#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,p,flag=0,q;
    cin >> n;
    cin >> p;
    int a[p];
    for(int i=0;i<p;i++){
       cin >>  a[i];
    }
    cin >> q;
    int b[q];
    for(int i=0;i<q;i++){
      cin >> b[i];
    }
    flag = 0;
    int m[102];
    for(int i=0;i<102;i++){
      m[i]=0;
      }
      for(int i=0;i<p;i++){
      if(m[a[i]]==0){
        flag++;
        m[a[i]]++;
    }
      }
           for(int i=0;i<q;i++){
      if(m[b[i]]==0){
        flag++;
        m[b[i]]++;
    }
      }
    if(flag==n)
        cout << "I become the guy."<< endl;
    else
        cout << "Oh, my keyboard!"<<endl;
    return 0;
}