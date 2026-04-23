#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l, c1, c2, c3, c4, c5;
    scanf("%d %d %d %d %d %d", &l, &c1, &c2, &c3, &c4, &c5);
    l -= c1 + c2 + c3 + c4 + c5;
    if(l == 0) {
        printf("Abastece perfeitamente.");
    } else if(l > 0) {
        printf("Abastece e sobra: %d.", l);
    } else {
        printf("Insuficiente.");
    }
	return 0;
}
