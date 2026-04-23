#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c, v = 7;
    scanf("%d", &c);
    if(c > 100) {
        v += (c - 100) * 5;
        c = 100;
    }
    if(c > 30) { 
        v += (c - 30) * 2;
        c -= (c - 30);
    }
    if(c > 10) {
        v += c - 10;
    }
    printf("%d", v);
	return 0;
}
