#include <stdio.h>

int main(){
    int a[10][10], i, j, sum-0;
    printf("Enter row and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter array elements: ");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            scanf("%d", &a[i][j]);    
        }
    }
    
    printf("The array is \n");   
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            printf("%d", a[i][j]);    
        }
        printf("\n"); 
    }
    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if (i == j){
                sum += a[i][j];
            }
    }
    printf("The diagonal sum: %d", sum);
    return 0;

}
