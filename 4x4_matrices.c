#include <stdio.h>
int main()
{
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int i, j, k = 0, l = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", arr1[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
        ;
    {
        for (j = 0; j < 4; j++)
            ;
        {
            if (arr1[i][j] % 2 == 0)
            {
                k = k + arr1[i][j];
            }

            else
            {
                l = l + arr1[i][j];
            }
        }
    }

    printf("value of even number is: %d \n", k);
    printf("value of odd number is: %d \n", l);

    return 0;
}
