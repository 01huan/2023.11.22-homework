#include <bits/stdc++.h>
int main () {
    FILE * read = fopen("read.txt", "r");
    FILE * write = fopen("write.txt", "w");
    char str[1024];
    while (fgets(str, 1024, read)) {
        int i;
        for (i=0; i<strlen(str); i++) {
            if (isalpha(str[i])) {
                if ((str[i]-'a' + 2) <= 25) {
                    str[i] += 2;
                } else {
                    str[i] = (str[i]+2 - 'a') % 26 + 'a';
                }
            }
        }
        fprintf(write, "%s", str);
    }
    fclose(read);
    fclose(write);
}