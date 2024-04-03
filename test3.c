#include <stdio.h>
 int main()
{
    int i,j,r,c,k;
    printf("Enter the array's row size:");
    scanf("%d", &r);
    printf("Enter the array's column size:");
    scanf("%d", &c);
    int a[r][c];
    printf("\n");
    printf("Enter array's elements:\n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("[%d][%d]=>", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    k = a[0][0];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (k < a[i][j])
            {
                k = a[i][j];
            }
        }
    }
    printf("\n");
    printf("The largest element is: %d", k);
    return 0;
}
