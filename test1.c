#include "test_functions.h"

void solution1() {
    int i =3;
    unsigned int ui = -1;

    char c = 'e';
    unsigned char uc = 'ae';

    float f = -3.14;

    short s = 4;
    unsigned short us = -1.3;

    long l = 5.4;
    unsigned long ul = -9999999;

    double d = 44;

    long long ll = -99999999999;
    unsigned long long ull = -999999;

    printf("ui = %u\n", ui);
    printf("c = %c\n", c);
    printf("uc = %d\n", uc);
    printf("uc = %c\n", uc);
    printf("us = %d\n", us);
    printf("us = %hu\n", us);
    printf("ul = %lu\n", ul);
    printf("ull = %llu\n", ull);
}