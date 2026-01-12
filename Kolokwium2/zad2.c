#include <stdio.h>
#include <stdlib.h> // Potrzebne do rand(), srand()
#include <time.h>   // Potrzebne do time()

// Tablica stałych napisów (nazwy przeciwników)
const char *przeciwnicy[] = {"Zlosliwy Goblin", "Smierdzacy Troll", "Maly Smok", "Czarnoksieznik"};

// Funkcja zmieniająca stan gracza (parametry przez wskaźnik)
void akcja(int *hp, int *gold) {
    int zdarzenie = rand() % 2; // Losujemy 0 lub 1 (0 - walka, 1 - znalezisko)

    if (zdarzenie == 0) {
        // WALKA
        int index_potwora = rand() % 4; // Losujemy nazwę z tablicy (0-3)
        int obrazenia = (rand() % 15) + 5; // Obrażenia od 5 do 19

        // Modyfikacja zmiennej w main przez wskaźnik
        *hp -= obrazenia; 

        printf("\n -> Spotykasz: %s!\n", przeciwnicy[index_potwora]);
        printf(" -> Potwor atakuje i zadaje %d obrazen.\n", obrazenia);
    } else {
        // ZNALEZISKO
        int znalezione_zloto = (rand() % 20) + 10; // Złoto od 10 do 29
        
        // Modyfikacja zmiennej w main przez wskaźnik
        *gold += znalezione_zloto;

        printf("\n -> Znalazles skrzynie ze skarbem!\n");
        printf(" -> Zyskujesz %d sztuk zlota.\n", znalezione_zloto);
    }
}

int main() {
    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    int hp = 100;
    int gold = 0;
    int wybor;
    const int CEL_ZLOTA = 100;

    printf("=== LABIRYNT DECYZJI ===\n");
    printf("Cel: Uzbieraj %d zlota zanim zginiesz.\n", CEL_ZLOTA);

    // Główna pętla gry
    while (hp > 0 && gold < CEL_ZLOTA) {
        printf("\n----------------------------\n");
        printf("Stan gracza: HP=%d | ZLOTO=%d\n", hp, gold);
        printf("1. Ruszaj w nieznane (Ryzyko)\n");
        printf("2. Odpocznij (Leczenie)\n");
        printf("3. Sprawdz stan plecaka\n");
        printf("Wybierz akcje: ");
        
        scanf("%d", &wybor);

        // Obsługa menu (switch)
        switch (wybor) {
            case 1:
                // Przekazujemy ADRESY zmiennych (&hp, &gold)
                akcja(&hp, &gold);
                break;
            
            case 2:
                printf("\n -> Odpoczywasz przy ognisku...\n");
                hp += 10;
                if (hp > 100) hp = 100; // Nie przekraczamy max HP
                printf(" -> Odzyskujesz sily (+10 HP).\n");
                break;

            case 3:
                printf("\n -> Otwierasz plecak. Masz %d zlota i kilka kanapek.\n", gold);
                break;

            default:
                printf("\n -> Nie ma takiej opcji! Tracisz czas.\n");
                break;
        }
    }

    // Warunek końcowy
    printf("\n============================\n");
    if (hp <= 0) {
        printf("KONIEC GRY. Polegles w walce... Zdobyles %d zlota.\n", gold);
    } else {
        printf("GRATULACJE! Uzbierales %d zlota i uciekles z labiryntu!\n", gold);
    }

    return 0;
}