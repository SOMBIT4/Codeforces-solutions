#include <stdio.h>
#include <string.h>
int main ()
{
    char ch[100];
    int i,n,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",&ch);
        l=strlen(ch);
        if(l>10){
            printf("%c%d%c\n",ch[0],l-2,ch[l-1]);
        }
        else{
            printf("%s\n",ch);
        }
    }
    return 0;
}
