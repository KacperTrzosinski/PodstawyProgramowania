#include <stdio.h> /* printf, scanf */
#include <stdlib.h> /* system */
#include <string.h> /* strlen */
#include <time.h> /* fun. daty/czasu */
#define MAX_LEN 15 // rozmiar bufora
// funkcja 'main' nie ma parametrów
int main(void) {
    char name[MAX_LEN + 1]; // imię na max. 15 znaków i '\0'
    int age, nameLength = 0; // typ int
    time_t rawTime; // typ time_t [data/czas]
    fflush(stdout); // zeruj strumień wy
    fflush(stdin); // zeruj strumień we
    system("chcp 1250 >NUL"); // Win 1250
    printf("\n\nPodaj imię: ");
    scanf("%15s", name); // czytaj max. 15 znaków do 'name'
    fflush(stdin); // zeruj strumień we
    printf("Podaj wiek: ");
    scanf("%d", &age); // czytaj liczbę całkowitą do 'age'
    printf("\nWitaj %s", name); // pisz tekst
    printf(" - masz lat %d.\n", age); // formatuj i pisz tekst
    nameLength = strlen(name); // oblicz liczbę znaków w 'name"
    printf("Twoje imię składa się z %d znaków.\n", nameLength); // formatuj i pisz tekst
    time(&rawTime); // odczytaj surowy czas z systemu
    printf("\nData/czas: %s\n", ctime(&rawTime)); //zamień na tekst i wyprowadź
    system("pause"); // zatrzymaj się
    return 0; // funkcja main zwraca 0, czyli brak błędu
}