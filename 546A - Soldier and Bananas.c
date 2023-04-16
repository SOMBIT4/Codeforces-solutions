#include <stdio.h>
int main ()
{
    long long int i,n;
    int k,w,s=0,r;
    scanf("%d %d %lld",&k,&w,&n);
    for(i=1;i<=n;i++){
        s=s+(k*i);
    }
    if(s>w){
        r=s-w;
     printf("%d",r);
    }
    else if(s<w || s==w)
        printf("0");
    return 0;
}
