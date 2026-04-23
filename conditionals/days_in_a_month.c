#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m, a, d;
    scanf("%d %d", &m, &a);
    if(m == 2) {
        if(a%4 == 0 && a%100 != 0 || a%400 == 0) {
            d = 29;
        } else {
            d = 28;
        }
    } else if(m == 4 || m == 6 || m == 9 || m == 11) {
        d = 30;
    } else {
        d = 31;
    }
    printf("%d", d);
    
	return 0;
}
