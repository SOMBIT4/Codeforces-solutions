#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m,k,H,t,c=0;
    cin >> t;
    
    while(t--){
    cin >> n >> m >> k >> H;
    int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     c=0;
     for(int j=0;j<n;j++){
        for(int l=1;l<=m;l++){
            if(abs(H-a[j])==(l*k) && abs(H-a[j]) <= (m*k)-k )
               c++;
        }
     }
     cout << c << endl;
    }
  return 0;
}
