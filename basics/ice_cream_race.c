#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int B, K, T, Bs, Ks;
    scanf("%d %d", &B, &K);
    scanf("%d", &T);
    Bs = B/T;
    Ks = K/T;
    printf("Badtz-Maru comeu %d sorvetes.\n", Bs);
    printf("Keroppi comeu %d sorvetes.", Ks);
	return 0;
}
