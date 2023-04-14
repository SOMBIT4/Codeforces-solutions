#include <stdio.h>
int main ()
{
    char s[100];
    int u=0,l=0,e=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            l++;
        else if(s[i]>='A'&&s[i]<='Z')
            u++;
    }
    for(int i=0;s[i]!='\0';i++){
        if(l>u){
             if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
        else if(l<u){
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-32;
        }
        else if(l==u){
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
    }
    printf("%s",s);
return 0;
}
