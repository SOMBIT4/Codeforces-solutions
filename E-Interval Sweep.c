#include <stdio.h>
int  main ()
{

    int a,b,k;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)
        printf("NO");
    else
    {
        if(a<b)
        {
            k=b-a;
            if(k<=2)
                printf("YES");
            else
                printf("NO");
        }
        else if(a==b)
            printf("YES");
        else
        {
            k=a-b;
            if(k>1)
                printf("NO");
            else
                printf("YES");
        }
    }
    return 0;
}
