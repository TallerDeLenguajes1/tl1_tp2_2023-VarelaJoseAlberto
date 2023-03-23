#include <stdio.h>
int main(int argc, char const *argv[]) {
#define N 20
    int i;
    int rand();
    double vt[N];
    for (i = 0; i < N; i++) {
        vt[i] = 1 + (rand() % 100);
        printf("%.2f ", vt[i]);
    }
    return 0;
}