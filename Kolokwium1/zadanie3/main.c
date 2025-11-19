#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > NULL");
    fflush(stdin);
    fflush(stdout);

    int airTemp, rain;

    printf("Podaj temperaturę powietrza: ");
    scanf("%d", &airTemp);

    printf("\n Czy pada deszcz (1 - pada, 0 - nie pada)? ");
    scanf("%d", &rain);

    if ((rain == 0 && airTemp > 25) || (airTemp > 35)) {
        printf("\n Można iść na basen.");
    } else {
        printf("Lepiej zostać w domu.");
    }

    return 0;
}