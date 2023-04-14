#include <stdio.h>
#include <string.h>
int main ()
{
   int n,m,j,len,i,t=1;
   scanf("%d %d",&n,&m);
   char s[n][m],str[2];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%s",str);
        s[i][j]=str[0];
    }
  }
    t=1;
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
    if(s[i][j]=='Y'||s[i][j]=='M'||s[i][j]=='C'){
       t=0;
    }
   }
   }
   if(t==0)
     printf("#Color\n");
   else
    printf("#Black&White\n");
    return 0;

}
