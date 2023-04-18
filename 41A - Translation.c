#include <stdio.h>
#include <string.h>
int main ()
{
    char s[100],t[100],temp,tr[100];
    scanf("%s %s",s,t);
    int l=strlen(t);
    int k=0;
    for(int i=l-1;i>=0;i--){
        tr[k]=t[i];
        k++;
    }
   // tr[l]='\0';
    int flag=0;
    for(int i=0;i<l;i++){
        if(tr[i]==s[i])
            flag++;
        else{
            flag=0;
         break;
        }
    }
    if(flag>0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
