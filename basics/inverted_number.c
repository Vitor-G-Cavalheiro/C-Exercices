#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, nI;
    scanf("%d", &n);
    nI = (n/100) + (((n%100)/10) * 10) + (((n%10)%10) * 100);
    printf("%d", nI);
	return 0;
}
