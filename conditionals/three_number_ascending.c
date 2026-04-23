#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, aux;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) {
        aux = b;
        b = a;
        a = aux;
    }
    if(a > c) {
        aux = c;
        c = a;
        a = aux;
    }
    if(b > c){
        aux = b;
        b = c;
        c = aux;
    }
    printf("%d\n%d\n%d", a, b, c);
	return 0;
}
