#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b;
    bool bereit = false;
    scanf("%d %d", &a, &b);

    /////////////////////////////////
    if (a == 2){
        printf("A ist 2");
    }

    if (a != 2){
        printf("A ist nicht 2");
    }

    if (a + b == 4){
        printf("A ist 4");
    }

    if (bereit){
        printf("Das Programm ist bereit");
    } else {
        printf("Das Programm ist nicht bereit");
    }

    // if(!bereit) {
    //     printf("Das Programm ist nicht bereit");
    // }
}