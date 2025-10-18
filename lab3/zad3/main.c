#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    fflush(stdout);
    fflush(stdin);
    system("chcp 65001 > NUL");
    // UTF-8
    int64_t arg1, arg2, iadd, isub, imul, idiv, imod;
    puts("Operacje arytmetyczne na liczbach typu 'int64_t'");
    printf("Podaj dwie liczby typu int oddzielone spacją: ");
    fflush(stdin);
    // usuń znaki z bufora klawiatury
    scanf("%d%d", &arg1, &arg2);
    iadd = arg1 + arg2;
    printf("%d %c %d = %d\n", arg1, '+',arg2, iadd);
    isub = arg1 - arg2;
    printf("%d %c %d = %d\n", arg1, '-',arg2, isub);
    imul = arg1 * arg2;
    printf("%d %c %d = %d\n", arg1, '*',arg2, imul);
    if (arg2 != 0) // warunek wykonania operacji
    {
        idiv = arg1 / arg2;
        printf("%d %c %d = %d\n", arg1, '/',arg2, idiv);
        imod = arg1 % arg2;
        printf("%d %c %d = %d\n", arg1, '%',arg2, imod);
    }
    double farg1, farg2, fadd, fsub, fmul, fdiv;
    puts("\nOperacje arytmetyczne na liczbach typu 'double'");
    printf("Podaj dwie liczby typu double oddzielone spacją: ");
    fflush(stdin);
    // usuń znaki z bufora klawiatury
    scanf("%lf%lf", &farg1, &farg2);
    fadd = farg1 + farg2;
    printf("%.3lf + %.3lf = %lf\n", farg1, farg2, fadd);
    fsub = farg1 - farg2;
    printf("%.3lf - %.3lf = %lf\n", farg1, farg2, fsub);
    fmul = farg1 * farg2;
    printf("%.3lf * %.3lf = %lf\n", farg1, farg2, fmul);
    fdiv = farg1 / farg2;
    printf("%.3lf / %.3lf = %lf\n\n", farg1, farg2, fdiv);
    system("pause");
    return 0;
}