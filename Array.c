#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100], n, b, p, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    
    //displaying array
    for(int i=1;i<=n;i++)
    {
        printf("*\t");
    }
    
    printf("\nEnter a number\n");
    scanf("%d", &b);
    printf("Enter a position\n");
    scanf("%d", &p);
    
    for(i=1;i<=n;i++)
    {
        if(i==p)
        {
            a[i-1]=b;
        }
        else
        {
            a[i-1]='*';
        }
    }
    
    printf("Displaying array\n");
    for(i=1;i<=n;i++)
    {
        if(i==p)
        {
            printf("%d\t", a[i-1]);
        }
        else
        {
            printf("%c\t", a[i-1]);
        }
    }
    
    printf("\n");
    return 0;
}
