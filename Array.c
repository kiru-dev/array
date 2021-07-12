#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100], n, b, p, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    //displaying array
    for(int i=0;i<n;i++)
    {
        printf("*\t");
    }
    printf("\nEnter a number\n");
    scanf("%d", &b);
    printf("Enter a position starting from zero\n");
    scanf("%d", &p);
    for(i=0;i<n;i++)
    {
        if(i==p)
        {
            a[i]=b;
        }
        else
        {
            a[i]='*';
        }
    }
    printf("Displaying array\n");
    for(i=0;i<n;i++)
    {
        if(i==p)
        {
            printf("%d\t", a[i]);
        }
        else
        {
            printf("%c\t", a[i]);
        }
    }
    printf("\n");
    return 0;
}
