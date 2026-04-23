#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int pgI, pgT, pgF;
    float p;
    scanf("%d", &pgI);
    scanf("%f", &p);
    pgT = (pgI * 100) /p;
    pgF = pgT - pgI;
    printf("O documento possui %d paginas\n", pgT);
    printf("Ja foram impressas %d paginas\n", pgI);
    printf("Faltam %d paginas", pgF);
	return 0;
}
