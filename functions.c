#include <stdlib.h>

int min_of_five(int zahl1, int zahl2, int zahl3, int zahl4, int zahl5){
    int min;
    for (int i = 0; i < 5; i++) {
            if (min > zahl1) {
                min = zahl1;
            }
            if (min > zahl2) {
                min = zahl2;
            }
            if (min > zahl3) {
                min = zahl3;
            }
            if (min > zahl4) {
                min = zahl4;
            }
            if (min > zahl5) {
                min = zahl5;
            }
        }

	printf("%d ist die kleinste eingegebene Zahl\n", min);
    return min;
}

int max_of_five(int zahl1, int zahl2, int zahl3, int zahl4, int zahl5){
    int max;
    for (int i = 0; i < 5; i++) {
		if(max < zahl1) {
			max = zahl1;
		}
		if(max < zahl2) {
			max = zahl2;
		}
		if (max < zahl3) {
			max = zahl3;
		}
		if (max < zahl4) {
			max = zahl4;
		}
		if (max < zahl5) {
			max = zahl5;
		}
	}
	printf("%d ist die größte eingegebene Zahl\n", max);
    return max;

}
int main() {
    int zahl1 = 0;
	int zahl2 = 0;
	int zahl3 = 0;
	int zahl4 = 0;
	int zahl5 = 0;

	scanf("%d %d %d %d %d", &zahl1, &zahl2, &zahl3, &zahl4, &zahl5);
    ////////////////////////////////
    min_of_five(zahl1, zahl2, zahl3, zahl4, zahl5);
    max_of_five(zahl1, zahl2, zahl3, zahl4, zahl5);
}