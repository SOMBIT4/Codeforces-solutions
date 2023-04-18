#include <stdio.h>
#include <string.h>
int main ()
{
    int t,n;
    scanf("%d %d",&n,&t);
    char s[n+5];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=1;i<=t;i++){
        for(int j=0;j<l;j++){
            if (s[j] == 'B' && s[j + 1] == 'G') {
                s[j] = 'G';
                s[j + 1] = 'B';
            }
        }
    }
    printf("%s",s);
    return 0;
}
