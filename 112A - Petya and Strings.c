#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[100];
    char s2[100];
    scanf("%s %s",s1,s2);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=s1[i]+32;
    }
    for(int i=0;s2[i]!='\0';i++){
        if(s2[i]>='A'&&s2[i]<='Z')
            s2[i]=s2[i]+32;
    }
    int result = strcmp(s1,s2);
    if(result>0)
        printf("1");
    else if(result==0)
        printf("0");
    else
        printf("-1");
    return 0;
}
