#include <stdio.h> /* printf, scanf, puts, fflush, ... */
#include <stdlib.h> /* system */
int main(void)
{
    fflush(stdout);
    fflush(stdin);
    system("chcp 65001 > NUL"); // UTF-8
    long int arg1, arg2, iadd, isub, imul, idiv, imod;
    puts("Operacje arytmetyczne na liczbach typu 'long int'");
    printf("Podaj dwie liczby typu long int oddzielone spacją: ");
    fflush(stdin); // usuń znaki z bufora klawiatury
    scanf("%ld%ld", &arg1, &arg2);
    iadd = arg1 + arg2;
    printf("%ld %c %ld = %d\n", arg1, '+',arg2, iadd);
    isub = arg1 - arg2;
    printf("%ld %c %ld = %ld\n", arg1, '-',arg2, isub);
    imul = arg1 * arg2;
    printf("%ld %c %ld = %ld\n", arg1, '*',arg2, imul);
    if (arg2 != 0) // warunek wykonania operacji
    {
        idiv = arg1 / arg2;
        printf("%ld %c %ld = %ld\n", arg1, '/',arg2, idiv);
        imod = arg1 % arg2;
        printf("%ld %c %ld = %ld\n", arg1, '%',arg2, imod);
    }
    double farg1, farg2, fadd, fsub, fmul, fdiv;
    puts("\nOperacje arytmetyczne na liczbach typu 'double'");
    printf("Podaj dwie liczby typu double oddzielone spacją: ");
    fflush(stdin); // usuń znaki z bufora klawiatury
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