#include <stdio.h>

int main() {
    printf("Jednoducha kalkulacka\n");
    printf("*********************\n");

    printf("vyber druh aritmeticke operace:\n");
    printf("scitani:\n");
    printf("odcitani:\n");
    printf("nasobeni:\n");
    printf("deleni:\n");

    char operace = 0;
    int cisloA = 0, cisloB = 0;
    float vysledek = 0;

    operace = getchar();
    printf("zadej prvni cislo:");
    scanf("%d", &cisloA); // add & operator to get the address of the variable
    printf("zadej druhe cislo:");
    scanf("%d", &cisloB); // add & operator to get the address of the variable

    switch (operace) {
        case '+':
            vysledek = cisloA + cisloB;
            printf("vysledek je %f\n", vysledek); // add newline character
            break; // add break statement to exit the switch block after each case
        case '-':
            vysledek = cisloA - cisloB;
            printf("vysledek je %f\n", vysledek); // add newline character
            break; // add break statement to exit the switch block after each case
        case '*':
            vysledek = cisloA * cisloB;
            printf("vysledek je %f\n", vysledek); // add newline character
            break; // add break statement to exit the switch block after each case
        case '/':
            vysledek = (float) cisloA / (float) cisloB;
            printf("vysledek je %f\n", vysledek); // add newline character
            break; // add break statement to exit the switch block after each case
        default:
            printf("Chyba zadani.\n"); // add newline character
    };

    return 0;
}