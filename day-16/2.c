//wap to genereate fibonacci series upto n terms using function

#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci (int n){
    int a=0, b=1, c, i;
    printf("The fibonacci series is \n");
    printf("%d\t%d\t", a, b);
    for(i = 1; i < n -1; i++){
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
}