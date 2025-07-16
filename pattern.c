#include <stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        for(int j = 1; j <= number - i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
