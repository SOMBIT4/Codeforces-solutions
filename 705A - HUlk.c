#include <stdio.h>
int main ()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        k=0;
        if(i%2==0)
        {
            printf("I love ");
            k=n-i;
            if(k>=1)
                printf("that ");
        }
        else
        {
            printf("I hate ");
            k=n-i;
            if(k>=1)
                printf("that ");
        }
    }
    printf("it");
    return 0;
}
