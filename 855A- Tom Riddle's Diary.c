#include <stdio.h>
#include <string.h>
int main ()
{
    char s[100][101];
    int n,t=0;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
          t=0;
        scanf("%s",s[i]);
        for(j=0;j<i;j++){
            if(strcmp(s[i],s[j])==0){
                t=1;
                break;
            }
        }
    if(t==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
        return 0;
}
