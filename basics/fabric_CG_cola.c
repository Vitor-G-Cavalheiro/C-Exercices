#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int g350, g600, g2L;
    double total;
    scanf("%d", &g350);
    scanf("%d", &g600);
    scanf("%d", &g2L);
    total = (g350 * 0.35) + (g600 * 0.600) + (g2L * 2.0);
    printf("Foram comprados %.1lf litros de refrigerante.", total);
	return 0;
}
