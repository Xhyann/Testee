#include <stdlib.h>

int main() {
    int fall;

    scanf("%d", fall);

    //Welche Fälle sollen untersucht werden?
    switch(fall){
        case 1:
            printf("Erster Fall");
            break; //Muss am Ende stehen damit der switch aufhört und nicht weiter geht als gewollt
        case 2:
            printf("Zweiter Fall");
            break;
        case 3:
            printf("Dritter Fall");
            break; 
        default: //Trifft sonst nichts zu, mache folgendes Standartverhalten
            printf("Sonst mache das hier");
            break;
    }
}