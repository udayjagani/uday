#include <stdio.h>
int main()
{
    int i, j, n;

    // 'count' variable to count the numbers
    int count = 0;

    // Take input from the user. Num of rows to print
    printf("Enter how many rows you want : ");
    scanf("%d", &n);

    // Loop until we reach row value
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            // At each number, Increase the value of 'count' and display
            count++;
            printf(" %d", count);
        }

        printf("\n");
    }
    return 0;
}