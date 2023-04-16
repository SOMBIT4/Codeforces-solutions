#include <stdio.h>
#include <string.h>
int main ()
{
    char s[100],temp;
    scanf("%s",s);
    int l= strlen(s);
    for(int i=0;i<l-2;i=i+2){
            for(int j=i;j<l;j=j+2){
        if(s[i]>s[j]){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
    }
    printf("%s",s);
    return 0;
}
