#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int zufallsZahl = rand() % 20;

    printf("zufallsZahl: %d", zufallsZahl);


}