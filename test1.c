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

    printf("i = %d\n", i);
    printf("ui = %u\n", ui);
    printf("c = %c\n", c);
    printf("c = %d\n", c);
    printf("uc = %u\n", uc);
    printf("uc = %c\n", uc);
    printf("f = %f\n", f);
    printf("s = %d\n", s);
    printf("s = %hd\n", s);
    printf("us = %u\n", us);
    printf("us = %hu\n", us);
    printf("l = %ld\n", l);
    printf("ul = %lu\n", ul);
    printf("d = %lf\n", d);
    printf("ll = %lld\n", ll);
    printf("ull = %llu\n", ull);
}