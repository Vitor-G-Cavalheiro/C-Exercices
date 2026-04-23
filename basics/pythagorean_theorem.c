#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double c1, c2, h;
    scanf("%lf", &c1);
    scanf("%lf", &c2);
    h = sqrt(pow(c1, 2) + pow(c2, 2));
    printf("%.2lf", h);
	return 0;
}
