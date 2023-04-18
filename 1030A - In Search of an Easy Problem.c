#include <stdio.h>
int main ()
{
    int n,flag=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int i=0;i<n;i++){
        if(s[i]==1){
            flag++;
            break;
        }
    }
    if(flag==1)
        printf("HARD");
    else
        printf("EASY");
    return 0;
}
