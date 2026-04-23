#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, n5;
    double total;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    total = ((n1 + n5) * 3.0) + ((n2 + n3) * 2.5) + n4 * 1.0;
    printf("Conta final: %.2lf", total);
	return 0;
}
