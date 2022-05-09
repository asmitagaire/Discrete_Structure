#include <stdio.h>

int power(int n, int n1);

int main()
{
    int base, a;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number: ");
    scanf("%d", &a);
    int result = power(base, a);
    printf("%d%d = %d", base, a, result);
    return 0;
}
int power(int base, int a)
 {
    if (a != 0)
        return(base * power(base, a-1));
    else
        return 1;
}