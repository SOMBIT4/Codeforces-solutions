#include <stdio.h>
int main ()
{
    long long int n,temp,l,j;
    int k;
    scanf("%lld %d",&n,&k);
    temp=n;
    for(int i=1;i<=k;i++){
            l=temp%10;
        if(l==0)
            temp=temp/10;
    else
        temp=temp-1;
    }
    printf("%d",temp);
    return 0;
}
