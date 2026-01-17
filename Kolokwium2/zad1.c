#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int liczba;
    int suma_dodatnich = 0;
    int ilosc_dodatnich = 0;
    int ilosc_nieparzystych_ujemnych = 0;
    int ilosc_poprawnych = 0;
    
    fflush(stdout);
    system("chcp 65001 >NUL");
    
    printf("=== Analizator Ciagu Liczbowego ===\n");
    printf("Wprowadzaj liczby z zakresu [-50, 50]. Podaj 0, aby zakończyć.\n\n");

    while (1) {
        do {
            printf("Podaj liczbę: ");
            scanf("%d", &liczba);

            if (liczba == 0) break;

            if (liczba < -50 || liczba > 50) {
                printf("Bład! Liczba musi byc w przedziale [-50, 50]. Spróbuj ponownie.\n");
            }
        } while (liczba < -50 || liczba > 50);

        if (liczba == 0) {
            break;
        }
        ilosc_poprawnych++; 

        if (liczba < 0 && liczba % 2 != 0) {
            ilosc_nieparzystych_ujemnych++;
        }

        if (liczba > 0) {
            suma_dodatnich += liczba;
            ilosc_dodatnich++;
        }
    }

    printf("\n--- STATYSTYKI ---\n");
    printf("Ilość liczb nieparzystych ujemnych: %d\n", ilosc_nieparzystych_ujemnych);

    if (ilosc_dodatnich > 0) {
        double srednia = (double)suma_dodatnich / ilosc_dodatnich;
        printf("średnia liczb dodatnich: %.2f\n", srednia);
    } else {
        printf("średnia liczb dodatnich: brak danych (nie podano liczb dodatnich).\n");
    }

    printf("Wykres ilości wprowadzonych danych: ");
    for (int i = 0; i < ilosc_poprawnych; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
