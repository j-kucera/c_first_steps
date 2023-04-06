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
    int cisloA=0, cisloB=0;
    float vysledek=0;

    operace = getchar();
    printf("zadej prvni cislo:");
    scanf("%d", &cisloA);
    printf("zadej druhe cislo:");
    scanf("%d", &cisloB);

    switch (operace)
    {
        case '+':
            vysledek=cisloA+cisloB;
            printf("vysledek je %f", vysledek);
            break;
        case '-':
            vysledek=cisloA-cisloB;
            printf("vysledek je %f", vysledek);
            break;
        case '*':
            vysledek=cisloA*cisloB;
            printf("vysledek je %f", vysledek);
            break;
        case '/':
            vysledek=(float)cisloA/(float)cisloB;
            printf("vysledek je %f", vysledek);
            break;