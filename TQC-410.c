#include <bits/stdc++.h>
int main() {
    int count, LineCount = 0;
    scanf("%d", &count);
    FILE * read = fopen("read.txt", "r");
    FILE * write = fopen("write.txt", "w");
    char buf[1024];
    while ((fgets(buf, 1024, read) != NULL) && (count != LineCount)) {
        int i;
        LineCount++;
        if (isalpha(buf[0])) {
            buf[0] = toupper(buf[0]);
        }
        for (i=1; i<strlen(buf); i++) {
            if ((buf[i-1] == ' ') && (isalpha(buf[i]))) {
                buf[i] = toupper(buf[i]);
            }
        }
        printf("%s", buf);
        fputs(buf, write);
    }
    fclose(read);
    fclose(write);
}