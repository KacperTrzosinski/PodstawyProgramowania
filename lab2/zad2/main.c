#include <stdio.h> /* printf, scanf, puts, fflush, ... */
#include <stdlib.h> /* system */
int main(void)
{
    fflush(stdout);
    fflush(stdin);
    system("chcp 65001 > NUL"); // UTF-8
    int arg1, arg2, iadd, isub, imul, idiv, imod;
    puts("Operacje arytmetyczne na liczbach typu 'int'");
    printf("Podaj dwie liczby typu int oddzielone spacją: ");
    fflush(stdin); // usuń znaki z bufora klawiatury
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
    float farg1, farg2, fadd, fsub, fmul, fdiv;
    puts("\nOperacje arytmetyczne na liczbach typu 'float'");
    printf("Podaj dwie liczby typu float oddzielone spacją: ");
    fflush(stdin); // usuń znaki z bufora klawiatury
    scanf("%f%f", &farg1, &farg2);
    fadd = farg1 + farg2;
    printf("%.3f + %.3f = %f\n", farg1, farg2, fadd);
    fsub = farg1 - farg2;
    printf("%.3f - %.3f = %f\n", farg1, farg2, fsub);
    fmul = farg1 * farg2;
    printf("%.3f * %.3f = %f\n", farg1, farg2, fmul);
    fdiv = farg1 / farg2;
    printf("%.3f / %.3f = %f\n\n", farg1, farg2, fdiv);
    system("pause");
    return 0;
}