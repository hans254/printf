#include "main.h"
{
    const unsigned char *p = (const unsigned char *) str;
    while (*p) {
        if (*p >= 32 && *p < 127) {
            putchar(*p);
        } else {
            printf("\\x%02X", *p);
        }
        p++;
    }
}

int main() {
    const char *str = "Hello, world!\n\x1b[31mThis is a red text\x1b[0m.";
    printf("String with non-printable characters: %S\n", str);
    printf("String without special treatment: %s\n", str);
    return 0;
}

