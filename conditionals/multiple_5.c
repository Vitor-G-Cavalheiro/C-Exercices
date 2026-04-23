#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    (n%5) ? printf("Nao eh multiplo de 5") : printf("Eh multiplo de 5");
	return 0;
}
