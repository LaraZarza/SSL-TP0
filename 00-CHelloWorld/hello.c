#include <stdio.h>
int main (void) {
    printf ("Hello world");
    #ifdef __STDC_VERSION__
        printf("La version del estandar C (__STDC_VERSION__) es: %ld\n", __STDC_VERSION__);
    #else
        printf("Estás usando una versión muy antigua de C (C89/C90).\n");
    #endif
    return 0;
}
