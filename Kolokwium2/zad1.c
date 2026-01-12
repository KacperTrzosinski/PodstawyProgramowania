#include <stdio.h>

int main() {
    int liczba;
    int suma_dodatnich = 0;
    int ilosc_dodatnich = 0;
    int ilosc_nieparzystych_ujemnych = 0;
    int ilosc_poprawnych = 0;

    printf("=== Analizator Ciagu Liczbowego ===\n");
    printf("Wprowadzaj liczby z zakresu [-50, 50]. Podaj 0, aby zakonczyc.\n\n");

    while (1) {
        // --- Walidacja danych wejściowych (do...while) ---
        do {
            printf("Podaj liczbe: ");
            scanf("%d", &liczba);

            // Jeśli użytkownik poda 0, przerywamy walidację natychmiast (to sygnał końca)
            if (liczba == 0) break;

            // Sprawdzenie zakresu
            if (liczba < -50 || liczba > 50) {
                printf("Blad! Liczba musi byc w przedziale [-50, 50]. Sprobuj ponownie.\n");
            }
        } while (liczba < -50 || liczba > 50);

        // Warunek zatrzymania głównej pętli
        if (liczba == 0) {
            break;
        }

        // --- Logika obliczeniowa ---
        ilosc_poprawnych++; // Zliczamy do wykresu

        // Zliczanie nieparzystych ujemnych
        // (liczba < 0) oraz (reszta z dzielenia przez 2 jest różna od 0)
        if (liczba < 0 && liczba % 2 != 0) {
            ilosc_nieparzystych_ujemnych++;
        }

        // Dane do średniej arytmetycznej liczb dodatnich
        if (liczba > 0) {
            suma_dodatnich += liczba;
            ilosc_dodatnich++;
        }
    }

    // --- Wyjście i Wizualizacja ---
    printf("\n--- STATYSTYKI ---\n");
    printf("Ilosc liczb nieparzystych ujemnych: %d\n", ilosc_nieparzystych_ujemnych);

    if (ilosc_dodatnich > 0) {
        // Rzutowanie na double, aby wynik był zmiennoprzecinkowy
        double srednia = (double)suma_dodatnich / ilosc_dodatnich;
        printf("Srednia liczb dodatnich: %.2f\n", srednia);
    } else {
        printf("Srednia liczb dodatnich: brak danych (nie podano liczb dodatnich).\n");
    }

    // Wykres poziomy (pętla for)
    printf("Wykres ilosci wprowadzonych danych: ");
    for (int i = 0; i < ilosc_poprawnych; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}