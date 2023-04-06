#include <stdio.h>
int main ()
{
    int i,n,k,count;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    count = 0;
    for(i=0;i<n;i++){
        if(a[i]>a[k-1]||a[i]==a[k-1] && a[i]!=0)
            count++;

    }
    printf("%d",count);
    return 0;
}
