#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, delta, x, x1, x2;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if(a == 0){
        printf("NEESG");
    }
    else{
        delta = pow(b,2) - 4 * a * c;
        if(delta < 0){
            printf("NRR");
        }
        else {
                x1 = (-b + pow(delta, 0.5))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                printf("%.2f\n%.2f", x1, x2);
            }
    }
	return 0;
}
