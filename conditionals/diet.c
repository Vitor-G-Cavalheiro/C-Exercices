#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, n5, no = 1, cal;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    cal = n1;
    if(cal > n2) {
        no = 2;
        cal = n2;
    }
    if(cal > n3) {
        no = 3;
        cal = n3;
    }
    if(cal > n4) {
        no = 4;
        cal = n4;
    }
    if(cal > n5) {
        no = 5;
        cal = n5;
    }
    printf("Joaozinho escolheu a opcao %d, com %d calorias", no, cal);
    
	return 0;
}
