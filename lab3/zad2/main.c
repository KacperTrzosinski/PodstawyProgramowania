#include <stdio.h>
#include <stdlib.h>
#include <float.h> /* deklaracje stałych typów binarnych zmp */

int main(int argc, char* argv[]) {
    fflush(stdout);
    system("chcp 65001 >NUL");
    system("gcc --version");

    puts("\nRozmiary (w bitach) typów zmp, C17, x64)");
    printf("float\t\t%d\n", sizeof(float)*8);
    printf("double\t\t%d\n", sizeof(double)*8);
    printf("long double\t%d\n\n", sizeof(long double)*8);

    puts("\nCharakterystyka typu float");
    printf("min\t\t%e\n", FLT_MIN);
    printf("max\t\t%e\n", FLT_MAX);
    printf("precyzja (10)\t%d\n", FLT_DIG);
    float myFloat = 3.141592653589f;
    printf("Fixed-point notation (%%f): %f\n", myFloat);
    printf("Scientific notation (%%e): %e\n\n", myFloat);

    puts("\nCharakterystyka typu double");
    printf("min\t\t%.2e\n", DBL_MIN);
    printf("max\t\t%.2e\n", DBL_MAX);
    printf("precyzja (10)\t%d\n", DBL_DIG);
    double myDouble = 3.141592653589;
    printf("Fixed-point notation (%%lf): %lf\n", myDouble);
    printf("Scientific notation (%%le): %le\n\n", myDouble);

    puts("\nCharakterystyka typu long double");
    printf("min\t\t%.2Le\n", LDBL_MIN);
    printf("max\t\t%.2Le\n", LDBL_MAX);
    printf("precyzja (10)\t%d\n", LDBL_DIG);
    long double myLongDouble = 3.141592653589L;
    printf("Fixed-point notation (%%Lf): %Lf\n", myLongDouble);
    printf("Scientific notation (%%Le): %Le\n\n", myLongDouble);

    system("pause");
    return 0;
}