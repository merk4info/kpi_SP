#include <stdio.h>
#include <string.h>

void upper(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c >= 97 && c <= 122)
            str[i] -= 32;
    }
}

int main ()
{
    char* s = "guten tag!\n";
    upper(s);
    printf("%s", s);

    return 0;
}
