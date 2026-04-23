#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double n1, n2, n3, m, a = 0;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    m = (n1 + n2 + n3) /3;
    if(n1 > m) {
        a += 1;
    }
    if(n2 > m) {
        a += 1;
    }
    if(n3 > m) {
        a += 1;
    }
    printf("%.0lf", a);
	return 0;
}
