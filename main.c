#include <stdio.h>

int main() {

    // Dichiarazione delle variabili (Quattro numeri e Media)
    float a, b, c, d, media;

    // INPUT
    printf("Inserisci il primo numero: ");
    scanf("%f", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);

    printf("Inserisci il terzo numero: ");
    scanf("%f", &c);

    printf("Inserisci il quarto numero: ");
    scanf("%f", &d);

    // CALCOLO
    media = (a + b + c + d) / 4;

    // OUTPUT
    printf("La media = %.2f\n", media);

    return 0;
}