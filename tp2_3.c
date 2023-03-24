#include <stdio.h>

int main(int argc, char const *argv[]) {
#define N 5
#define M 7
    int i, j, rand();
    int mt[N][M];
    int *p;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            *p = 1 + rand() % 100;
            printf("| %2.d ", *p);
        }
        printf("|\n");
    }
    return 0;
}
