#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > NULL");
    fflush(stdin);
    fflush(stdout);

    int liczba;
    printf("Podaj liczbę punktów: ");
    scanf("%d", &liczba);

    if (liczba > 90) {
        printf("Ocena: 5.0");
    } else if (liczba > 80) {
        printf("Ocena: 4.5");
    } else if (liczba > 70) {
        printf("Ocena: 4.0");
    } else if (liczba > 60) {
        printf("Ocena: 3.5");
    } else if (liczba >= 50) {
        printf("Ocena: 3.0");
    } else {
        printf("Ocena: 2.0");
    }

    return 0;
}