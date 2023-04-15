#include <stdio.h>
int main ()
{
    char s[1000];
    scanf("%s",s);
    if(s[0]>='a'&&s[0]<='z')
    s[0]=s[0]-32;
    printf("%s",s);
    return 0;
}
