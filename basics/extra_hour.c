#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float sal, salF;
    int extra;
    scanf("%f", &sal);
    scanf("%d", &extra);
    salF = sal + ((sal/44) * extra) + ((sal/44) * extra * 0.1);
    printf("%.2lf", salF);
	return 0;
}
