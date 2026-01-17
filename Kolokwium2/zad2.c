#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   


const char *przeciwnicy[] = {"Złosliwy Goblin", " Troll", "Mały Smok", "Czarnoksiężnik"};

void akcja(int *hp, int *gold) {
    int zdarzenie = rand() % 2; 

    if (zdarzenie == 0) {
        int index_potwora = rand() % 4; 
        int obrazenia = (rand() % 15) + 5; 

        *hp -= obrazenia; 

        printf("\n -> Spotykasz: %s!\n", przeciwnicy[index_potwora]);
        printf(" -> Potwór atakuje i zadaje %d obrażeń.\n", obrazenia);
    } else {
        int znalezione_zloto = (rand() % 20) + 10;
        
        *gold += znalezione_zloto;

        printf("\n -> Znalazłeś skrzynie ze skarbem!\n");
        printf(" -> Zyskujesz %d sztuk złota.\n", znalezione_zloto);
    }
}

int main() {
    fflush(stdout);
    system("chcp 65001 >NUL");
    
    srand(time(NULL));

    int hp = 100;
    int gold = 0;
    int wybor;
    const int CEL_ZLOTA = 100;

    printf("=== LABIRYNT DECYZJI ===\n");
    printf("Cel: Uzbieraj %d złota zanim zginiesz.\n", CEL_ZLOTA);

    while (hp > 0 && gold < CEL_ZLOTA) {
        printf("\n----------------------------\n");
        printf("Stan gracza: HP=%d | ZŁOTO=%d\n", hp, gold);
        printf("1. Ruszaj w nieznane (Ryzyko)\n");
        printf("2. Odpocznij (Leczenie)\n");
        printf("3. Sprawdź stan plecaka\n");
        printf("Wybierz akcje: ");
        
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                akcja(&hp, &gold);
                break;
            
            case 2:
                printf("\n -> Odpoczywasz przy ognisku...\n");
                hp += 10;
                if (hp > 100) hp = 100; 
                printf(" -> Odzyskujesz siły (+10 HP).\n");
                break;

            case 3:
                printf("\n -> Otwierasz plecak. Masz %d złota i kilka kanapek.\n", gold);
                break;

            default:
                printf("\n -> Nie ma takiej opcji! Tracisz czas.\n");
                break;
        }
    }

    printf("\n============================\n");
    if (hp <= 0) {
        printf("KONIEC GRY. Poległeś w walce... Zdobyłes %d złota.\n", gold);
    } else {
        printf("GRATULACJE! Uzbierałeś %d złota i uciekles z labiryntu!\n", gold);
    }

    return 0;
}
