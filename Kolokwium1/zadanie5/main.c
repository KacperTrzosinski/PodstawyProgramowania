#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > NULL");
    fflush(stdin);
    fflush(stdout);

    int wybor1, wybor2, wybor3;

    printf("Budzisz się w ciemnym lochu. Przed Tobą (1) ciężkie dębowe drzwi i (2) wąski tunel. Co wybierasz? (wpisz 1 lub 2)\n");

    scanf("%d", &wybor1);

    if (wybor1 == 1) {
        printf("Drzwi prowadzą do sali tronowej. Na tronie siedzi król. (1) Skłaniasz się nisko, (2) Ignorujesz go i idziesz dalej.\n");
        scanf("%d", &wybor2);
        if (wybor2 == 1) {
            printf("Król jest pod wrażeniem Twoich manier. Mianuje Cię swoim doradcą. Wygrałeś!\n");
        } else {
            printf("Za obrazę majestatu strażnicy wtrącają Cię z powrotem do lochu. Koniec gry.\n");
        }
    } else if (wybor1 == 2) {
        printf("Czołgasz się przez tunel i docierasz do skarbca pilnowanego przez śpiącego smoka. (1) Próbujesz się przekraść po złoto, (2) Wycofujesz się po cichu.\n");
        scanf("%d", &wybor3);
        if (wybor3 == 1) {
            printf("Smok obudził się i zionął ogniem. Przegrałeś.\n");
        } else {
            printf("Udało Ci się bezpiecznie wrócić do lochu. Zawsze to jakieś wyjście... Koniec gry.\n");
        }
    } else {
        printf("Z niezdecydowania potykasz się i wpadasz w ukrytą zapadnię. Koniec gry.\n");
    }
    return 0;
}