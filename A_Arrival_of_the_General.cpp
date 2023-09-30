// the answer is number of leftmost soldier with the maximum height - 1 + n - number of rightmost soldier with the minimum height.
// And if the leftmost soldier with the maximum height is more right then the rightmost soldier with the minimum height we should subtract one from the answer.
#include <bits/stdc++.h>
using namespace std;

int main ()
{
   int n;
   cin >> n;
   int a[n];
   for(int i=0 ;i<n;i++){
    cin >> a[i];
   }   
   int &max  = *max_element(a,a+n);
   int &min  = *min_element(a,a+n);
   int maxin = 0,minin =0 , sum=0 ;
  
   for(int i=0;i<n;i++){
    if(a[i]==max ){
        maxin = i;
        break;
    }
   }
      for(int i=0;i<n;i++){
    if(a[i]==min ){
        minin = i;
    }
   }

   sum = (maxin -1 )+ (n - minin);
  if(maxin > minin){ 
       sum--;
  }
   cout << sum << "\n";
  return 0;
}
