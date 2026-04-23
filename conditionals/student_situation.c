#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    double m;
    scanf("%d %d %d", &n1, &n2, &n3);
    m = (n1 + n2 + n3)/3.0;
    if(m < 0 || m > 100) {
        printf("Media invalida");
    } else {
        printf("A media do aluno foi %.2lf e ele foi ", m);
        if(m >= 70) {
            printf("APROVADO\n");
        } else if(m > 40) {
            printf("FINAL\n");
        } else {
            printf("REPROVADO\n");
        }
    }
	return 0;
}
