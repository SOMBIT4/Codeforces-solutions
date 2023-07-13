#include <stdio.h>
#include <string.h>
int main ()
{
    int i,count=0;
    char s[101];
    scanf("%s",s);
    i=strlen(s);
    for(int j=0;s[j]!='\0';j++){
    if(s[j]==s[j+1]){
        count ++;
        if(count==7 || count == 6)
            break;
    }
    else{
        count = 0;
    }
    }
        if(count == 7 || count == 6)
            printf("YES\n");
        else
            printf("NO\n");

    return 0;
}
