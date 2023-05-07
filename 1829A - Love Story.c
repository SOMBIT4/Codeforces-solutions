#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[11];
        scanf("%s",s);
        char target[] = "codeforces";
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != target[i]) {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
