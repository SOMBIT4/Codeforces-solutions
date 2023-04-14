#include <stdio.h>
int main ()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",((n*m)/2));//Each domino completely covers two squares.
    //2 squares is covered by 1 domino
    //1 squares is covered by 1/2 domino
    //(m*n)=total squares of that rectangular board is covered by (m*n)/2
    return 0;
}
