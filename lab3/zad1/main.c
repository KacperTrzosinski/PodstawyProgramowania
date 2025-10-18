#include <stdio.h>
#include <stdlib.h>
#include <limits.h> /* deklaracje stałych typów całkowitych */

int main(int argc, char* argv[]) {
    fflush(stdout);
    system("chcp 65001 > NUL");
    system("gcc --version");

    puts("Rozmiary (w bajtach) typów całkowitych, C17, x64)");
    printf("char\t\t%d\n", sizeof(char));
    printf("short\t\t%d\n", sizeof(short));
    printf("int\t\t%d\n", sizeof(int));
    printf("unsigned int\t%d\n", sizeof(unsigned int));
    printf("long\t\t%d\n", sizeof(long));
    printf("long long\t%llu\n", sizeof(long long));
    printf("unsigned long long\t%llu\n\n", sizeof(unsigned long long));

    puts("\nZakresy wybranych typów całkowitych, C17, x64)");
    puts("uwaga na specyfikatory formatu!\n");
    printf("short int\t\t%hd\t\t%hd\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int\t%hu\t\t%hu\n", 0, USHRT_MAX);
    printf("int\t\t\t%d\t\t%d\n", INT_MIN, INT_MAX);
    printf("unsigned int\t\t%u\t\t%u\n", 0, UINT_MAX);
    printf("long int\t\t%ld\t\t%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int\t%lu\t\t%lu\n", 0, ULONG_MAX);
    printf("long long int\t\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int\t%llu\t\t%llu\n\n", 0, ULLONG_MAX);

    system("pause");
    return 0;
}