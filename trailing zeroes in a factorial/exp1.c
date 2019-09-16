//Trailing zeros in factorial of a number
#include <stdio.h>
#include <math.h>

int main()
{
    int n,sum = 0;
    scanf("%d", &n);
    while(n/5 > 0){
        sum += n/5;
        n = n/5;
    }
    printf("%d", sum);
    return 0;
}
