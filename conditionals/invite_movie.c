#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int g, d, h, a; double p = 0;
    scanf("%d %d %d %d", &g, &d, &h, &a);
    switch(g) {
        case 1: p += 27.4; break;
        case 2: p -= 10.5; break;
        case 3: p += 19.7; break;
    }
    switch(d) {
        case 1: p -= 41.3; break;
        case 2: p += 40.4; break;
    }
    switch(h) {
        case 1: p -= 22.8; break;
        case 2: p += 11.4; break;
        case 3: p += 38.6; break;
    }
    p += a * 2.3;
    if(p <= 40) {
        printf("Melhor nao tentar.");
    } else if(p <= 80) {
        printf("Chances boas, pode convidar.");
    } else {
        printf("Provavelmente vao aceitar.");
    }
	return 0;
}
