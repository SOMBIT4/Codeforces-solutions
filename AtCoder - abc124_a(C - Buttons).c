#include <stdio.h>
int main ()
{
   int a ,b;
   scanf("%d %d",&a,&b);
   if(a>b){
       printf("%d",(a+(a-1)));
   }
   else if(a==b){
       printf("%d",a+b);
   }
   else{
       printf("%d",b+(b-1));
   }
   return 0;
}
