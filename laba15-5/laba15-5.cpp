#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, N;

    printf("Enter the size of the massif: ");
    scanf("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("Enter the elements of the massif:\n");
    for (i = 0; i < N; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nOriginal massif:\n");
    for (i = 0; i < N; ++i) {
        printf("%d\t", A[i]);
    }

    printf("\nReversed massif:\n");
    for (i = N - 1; i >= 0; --i) {
        printf("%d\t", A[i]);
    }

    free(A);

    return 420;
}