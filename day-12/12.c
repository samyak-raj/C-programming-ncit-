#include <stdio.h>

int main(){
    int i, j, a =1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf("%d\t", a++);
        }
        printf("\n");
    }
    return 0;
}