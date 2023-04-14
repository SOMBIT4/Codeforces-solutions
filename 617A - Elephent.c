#include <stdio.h>
int main ()
{
    int x,count=0;
    scanf("%d",&x);
    if(x>5){
        while(x>5){
            x=(x-5);
            count++;
        }
    }
    if(x<=5)
        count++;
        printf("%d",count);
        return 0;
}
