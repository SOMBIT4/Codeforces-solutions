#include <stdio.h>
int main ()
{
     int t,x=0;
      char a[5];
     scanf("%d",&t);
     while(t--){
        scanf("%s",&a);
        if(a[0]=='+'||a[1]=='+')
            x++;
        else if(a[0]=='-'||a[1]=='-')
            x--;
     }
     printf("%d",x);
     return 0;
}
