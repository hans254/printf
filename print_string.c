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
