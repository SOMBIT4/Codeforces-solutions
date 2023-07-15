#include <stdio.h>
#include <string.h>
int main (){
    char a[5];
    char f[5];
    scanf("%s",a);
    int l=strlen(a);
    int len=4-l;
    for(int j=0;j<len;j++){
        f[j]='0';
    }
    int k=0;
    for(int j=len ;j<4;j++){
        f[j]=a[k];
        k++;
    }
    f[4]='\0';
    printf("%s",f);
    return 0;
}
