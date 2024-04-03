#include <stdio.h>
int main()
{
    int n;
    int i, a[n]; 
    printf("Enter the size:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter any value:");
        scanf("%d", &a[i]);
    }

    printf("\nsquare are:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", a[i], a[i] * a[i]);
    }
    
    printf("\nHere the square of elements\n");
    return 0;
}
