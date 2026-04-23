#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int bMenor, bMaior, altura;
    double area;
    scanf("%d", &bMenor);
	scanf("%d", &bMaior);
	scanf("%d", &altura);
	area = ((bMenor + bMaior) * altura)/2.0;
	printf("%.1lf", area);
	return 0;
}
