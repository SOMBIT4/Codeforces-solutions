#include <stdio.h>
int main ()
{
    int i,t,count=0;
    scanf("%d",&t);
    char s[t];
        count=0;
        scanf("%s",s);
        for(i=0;i<t;i++){
            if(s[i]==s[i+1])
            count++;
        }
        printf("%d",count);
    return 0;
    }
