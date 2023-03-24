#include <stdio.h>

int main(int argc, char const *argv[]) {
#define N 5
#define M 7
    int i, j, rand();
    int mt[N][M];
    int *p;
    p = &mt[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            mt[i][j] = 1 + rand() % 100;
            printf("| %2.d ", *p);
            p++;
        }
        printf("|\n");
    }
    return 0;
}
