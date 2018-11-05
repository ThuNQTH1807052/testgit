#include <stdio.h>
#include <stdlib.h>

int main() {
    int *contro;
    int a = 10;
    contro = &a;
    printf("%d\n", a);
    printf("%d\n", *contro);
    printf("%d\n", &a);
    printf("%d\n", &contro);
int mang[4];
int *contro;
contro = mang;
    for (int i = 0; i < 4 ; ++i) {
        printf("%d\n", mang[i + 1]);
    }
    return 0;
}