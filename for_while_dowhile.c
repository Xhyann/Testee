#include <stdlib.h>

int main() {
    
    for(int i = 0; i < 10; i++){
        prinf("%d\n", i);
    }

    int iterator = 0;
    while(iterator != 10) {
        printf("%d\n", iterator);
        iterator++; // iterator = iterator + 1;
    }

    int j = 0;
    do {
        printf("%d\n", j);
    } while(j != 10);


}