#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;
    int j;
    int sum = 0;
    int sum1 = 0;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    if(a < b){
        for(i = (a + 1); i < b; i++){
            sum += i;

        }
        printf("Sum is: %d", sum);
    }else if(a > b){
        for(j = (b+1); j < a; j++){
            sum1 += j;
        }
        printf("Sum is: %d", sum1);
    }
    return 0;
}
