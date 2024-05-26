#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= i && j > n - i) {
                printf("%d ", n - (j > n - i ? n - i : i - 1) + 1);
            } else {
                printf("%d ", n);
            }
        }
        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(j <= i && j > n - i) {
                printf("%d ", n - (j > n - i ? n - i : i - 1) + 1);
            } else {
                printf("%d ", n);
            }
        }
        printf("\n");
    }

    return 0;
}