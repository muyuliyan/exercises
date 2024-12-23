#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void aver(float (*g)[6], int m) {
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += g[i][j];
        }
        g[i][5] = sum / m;
    }
}

void all_sum(float (*s)[6], int m, int n) {
    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < m; j++) {
            sum += s[j][i];
        }
        s[3][i] = sum;
    }
}

void ever_aver(float (*e)[6], int n) {
    printf("average:\n");
    for (int i = 0; i < 5; i++) {
        printf("%4f ", e[3][i] / n);
    }
    printf("\n");
}

int main() {
    float grade[4][6];
    float (*p)[6] = grade;

    // Input scores
    printf("Input scores:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%f", &grade[i][j]);
        }
    }

    // Output input scores
    printf("Input:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%8.0f", grade[i][j]);
        }
        printf("\n");
    }

    // Calculate average scores
    aver(p, 5);

    // Calculate all course sums
    all_sum(p, 3, 5);

    // Output the results
    printf("Output:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%8.1f", grade[i][j]);
        }
        printf("\n");
    }

    // Output average scores of each course
    ever_aver(p, 3);

    return 0;
}