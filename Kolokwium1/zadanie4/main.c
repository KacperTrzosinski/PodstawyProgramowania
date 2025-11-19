#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    system("chcp 65001 > NULL");
    fflush(stdin);
    fflush(stdout);

    double liczba;
    char operacja;

    printf("Podaj liczbę i rodzaj operacji oddzielone spacją: ");
    scanf("%lf %c", &liczba, &operacja);

    if (operacja == 's') {
        if (liczba < 0) {
            printf("Błąd: Nie można obliczyć pierwiastka z liczby ujemnej.");
        } else {
            printf("Wynik: %lf", sqrt(liczba));
        }
    } else if (operacja == 'q') {
        printf("Wynik: %lf", (liczba * liczba));
    } else if (operacja == 'i') {
        if (liczba == 0) {
            printf("Błąd: Dzielenie przez zero.");
        } else {
            printf("Wynik: %lf", (1/liczba));
        }
    } else {
        printf("Nieznana operacja.");
    }

    return 0;
}