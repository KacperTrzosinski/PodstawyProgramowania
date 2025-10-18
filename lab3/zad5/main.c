#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    fflush(stdout);
    fflush(stdin);
    system("chcp 65001 > NUL");

    double promien, obwod, pole;
    obwod = 2 * M_PI * promien;
    pole = M_PI * (promien*promien);

    printf("Podaj promień: \n");
    scanf("%lf", &promien);

    printf("%s %lf %s %lf", "\nPole koła o promieniu: ", promien, ", wynosi: ", pole);
    printf("%s %lf %s %lf", "\nObwód koła o promieniu: ", promien, ", wynosi: ", obwod);


    system("pause");
    return 0;
}