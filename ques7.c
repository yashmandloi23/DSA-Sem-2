#include <stdio.h>
int main()
{
    int arr[3][3], i, j, sum = 0, e = 0, o = 0;
    printf("Enter the elements of array\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The values where the sum of indexes is even are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }
    return 0;
}