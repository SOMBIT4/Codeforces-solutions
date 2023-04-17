#include <stdio.h>
int main ()
{
    long long int temp,n;
    int k,flag=0;
    scanf("%lld",&n);
    temp=n;
    while(temp!=0){
        k=temp%10;
        if(k==4 || k==7){
            flag++;
        }

        temp=temp/10;
    }
    if(flag==4 || flag == 7)
        printf("YES");
        else
            printf("NO");
        return 0;

}
