#include<stdio.h>
int main()
{
    int a[10],b[10],n1,n2;
    printf("Enter size of set A: ");
    scanf("%d",&n1);
    printf("Enter element of setA: ");
    for(int i = 0; i< n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of set B: ");
    scanf("%d",&n2);
    printf("Enter element of set B: ");
    for(int j = 0; j < n2; j++)
    {
        scanf("%d",&b[j]);
    }
    printf(" { ");
    for(int i = 0; i< n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            printf(" (%d %d) ", a[i],b[j]);
        }
    }
    printf(" } ");
    return 0;

}