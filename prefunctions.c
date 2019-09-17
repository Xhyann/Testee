#include <stdlib.h>

void saghallo(){
    printf("Hallo");
}

int welcheZahlIstDas(int zahl){
    printf("Die Übergebene Zahl ist: %d", zahl);
    return zahl;
}

int main() {
    saghallo();
    welcheZahlIstDas(5);
    
    printf("Das Programm übergibt: %d", welcheZahlIstDas(5));
}