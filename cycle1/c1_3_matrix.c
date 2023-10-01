#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int r, c, i, j;

    printf("Enter the row limit:");
    scanf("%d", &r);
    printf("Enter the column limit:");
    scanf("%d", &c);

    int a[r][c], b[r][c], sum[r][c], mul[r][c];

    printf("Enter the 1st matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("1st matrix elements are:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the 2nd matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("2nd matrix elements are:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    int ch, k;
    while (1) {
        printf("\n Enter your choice:\n 1.Addition \n 2.Transpose \n 3.Multiplication \n 4.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\n Sum of arrays:\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        sum[i][j] = a[i][j] + b[i][j];
                        printf(" %d", sum[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("\n Transpose of 1st matrix:\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        printf(" %d", a[j][i]);
                    }
                    printf("\n");
                }
                printf("\n Transpose of 2nd matrix:\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        printf(" %d", b[j][i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Multiplication of matrices:\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        mul[i][j] = 0;
                        for (k = 0; k < c; k++) {
                            mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                        }
                        printf(" %d", mul[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
