#include <stdio.h>
int main ()
{
   int a ,b;
   scanf("%d %d",&a,&b);
   if(a>b){
      printf("0\n");
   }
   else{
      int count=0;
      for(int i=a;i<=b;i++){
         count++;
      }
      printf("%d",count);
   }
   return 0;
}
