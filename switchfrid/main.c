#include <stdio.h>

int main() {
 float prezzo;
 char persone;
    printf("inserisci persone , P, D , S : ");
    scanf("%c",&persone);
    printf("inserisci il prezzo :");
    scanf("%f",&prezzo);
    switch(persone) {
        case 'P' :
            prezzo = prezzo - (prezzo * 0.10);
            break;
        case 'S' :
            prezzo = prezzo - (prezzo * 0.15);
            break;
        case 'D' :
            prezzo = prezzo - (prezzo * 0.25);
            break;
        default:
            printf("la persona non ha nessuno sconto");
            return 0;
    }
    printf("il prezzo finale è : %f", prezzo);
    return 0;

}
