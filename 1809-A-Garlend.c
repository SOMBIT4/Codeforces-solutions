#include <stdio.h>
int main ()
{
    int i,j,t;
    char s[5];
    scanf("%d",&t);
    while(t--){
        //fflush(stdin);
        scanf("%s",s);
                int m=0;
                int n=1;
                int k=0;
            for(i=0;i<3;i++){
                if(s[m]==s[n])
                        k++;
                    m++;
                    n++;
                }

            if(k==2){
                if(s[1]==s[2])
                printf("6\n");
            else
                printf("4\n");
            }
                else if (k==3)
                    printf("-1\n");
            else if(k==1){
                    if(s[1]==s[2])
                    printf("4\n");
            else if(s[0]!=s[3])
                printf("4\n");
            else if(s[0]==s[3])
                printf("6\n");
            }
                else
                    printf("4\n");
        }


    return 0;
}
