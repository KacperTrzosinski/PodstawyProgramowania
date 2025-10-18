#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    fflush(stdout);
    fflush(stdin);
    system("chcp 65001 > NUL");

    double cal = 2.54;
    double stopa = cal * 12;
    double cm;

    printf("Podaj długość w centymetrach: \n");
    scanf("%lf", &cm);
    printf("%lf %s %lf %s %lf %s", cm, " centymetrów = ", (cm/cal), " cali = ", (cm/stopa), " stóp. \n");




    system("pause");
    return 0;
}