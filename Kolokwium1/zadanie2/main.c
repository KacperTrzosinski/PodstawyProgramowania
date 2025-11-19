#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > NULL");
    fflush(stdin);
    fflush(stdout);

    printf("Wybierz liczbę całkowitą: ");

    int liczba;

    scanf("%d", &liczba);

    if (liczba % 2 == 0) {
        printf("Liczba jest parzysta.");
    } else {
        printf("Liczba jest nieparzysta.");
    }

    return 0;
}