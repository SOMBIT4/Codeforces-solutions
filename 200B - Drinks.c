#include <stdio.h>
int main ()
{
    int n;
    double sum=0;//float sum=0
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
       sum=sum+a[i];
    }
    sum=1.0*sum/n; // sum=sum/n
    printf("%lf",sum);//f
    return 0;

}
