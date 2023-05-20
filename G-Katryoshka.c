#include <stdio.h>
int main ()
{
    long long int n,m,k,l,f,d,j,u;
    scanf("%lld %lld %lld",&n,&m,&k);
    if(n==0 || k==0){
        printf("0");
    }
    else if(n==m && m==k && k==n)
        printf("%lld",n);
    else if(m==0){
        f=n/2;
        printf("%lld",f);
    }
    else{
        if(k<n && k<m){
            printf("%lld",k);
        }
        else if(m<k && m<n){
            if(n>k){
                    j=n-m;
            u=k-m;
            d=2*u;
                if(d<j){
                    l=k-m;
                    f=l+m;
                    printf("%lld",f);
                }
                else{
                l=n-m;
                f=m+(l/2);
                printf("%lld",f);
            }
            }
            else{

                l=n-m;
                f=m+(l/2);
                printf("%lld",f);

            }
        }
        else if (n<m && n<k){
            printf("%lld",n);
        }
    }
return 0;
}
