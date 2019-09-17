#include <stdlib.h>


int main() {
    //Was wollen wir scannen? (int? float? char?...)
    int zahl1;
    float zahl2;
    char buchstabe;

    // %d = "Format specifier" (Was will ich darstellen/einlesen)
    scanf("%d %d %d", &zahl1, &zahl2, &buchstabe);
    
    // Text im gewünschten Format ausgeben.
    printf("Text: %d Anderer Text %.2lf noch etwas: %c", zahl1, zahl2, buchstabe);


}