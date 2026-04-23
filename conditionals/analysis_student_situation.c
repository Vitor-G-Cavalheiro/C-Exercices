#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double m; int a, f;
    scanf("%lf %d %d", &m, &a, &f);
    if(m >= 5 && f/(a *1.0) <= 0.25 || f/(a * 1.0) <= 0.5 && m >= 7) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }
	return 0;
}
