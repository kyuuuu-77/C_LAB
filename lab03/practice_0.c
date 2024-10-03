#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("int 범위: %d ~ %d\n", INT_MIN, INT_MAX);
    printf("short 범위: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("long 범위: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("char 범위: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("float 범위: %e ~ %e\n", -FLT_MAX, FLT_MAX);
    printf("double 범위: %e ~ %e\n\n", -DBL_MAX, DBL_MAX);

    int intOverflow = INT_MAX + 1;
    short shortOverflow = SHRT_MAX + 1;
    long longOverflow = LONG_MAX + 1;
    char charOverflow = CHAR_MAX + 1;
    float floatOverflow = FLT_MAX * 1.01;
    double doubleOverflow = DBL_MAX * 1.01;

    printf("int 오버플로우: %d\n", intOverflow);
    printf("short 오버플로우: %d\n", shortOverflow);
    printf("long 오버플로우 : %ld\n", longOverflow);
    printf("char 오버플로우: %d\n", charOverflow);
    printf("float 오버플로우: %e\n", floatOverflow);
    printf("double 오버플로우: %e\n", doubleOverflow);

    return 0;
}