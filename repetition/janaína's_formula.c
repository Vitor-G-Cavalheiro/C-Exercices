#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, x;
    scanf("%d %d", &a, &b);
    for(a; a <= b; a++){
        x = pow(a, 2) - 4*a + 5;
        printf("%d\n", x);
    }
	return 0;
}
