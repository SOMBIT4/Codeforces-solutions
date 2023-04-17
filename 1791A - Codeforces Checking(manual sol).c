#include <stdio.h>
int main ()
{
    char s[]={'c','o','d','e','f','o','r','c','e','s','\0'};
    char ch;
    int flag=0,t;
    scanf("%d",&t);
    while(t--){
    //fflush(stdin);
    flag=0;
    scanf(" %c",&ch);//to avoid fflush have write format specifier like " %c"
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==ch)
            flag++;
    }
    if(flag==0)
        printf("NO\n");
    else
        printf("YES\n");
    }
    return 0;
}
