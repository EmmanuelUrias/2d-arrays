#include <stdio.h>

int main()
{
    // 2D = an array, where each element is an entire array
    //      useful if you need a matrix, grid, or table of data.

    int numbers[2][3] = {
        {1, 2, 3},
        {4, 5, 6}}; // its like a grid of elements

    // Making a grid of integers
    int moreNumbers[2][3];

    int rows = sizeof(moreNumbers) / sizeof(moreNumbers[0]);
    int columns = sizeof(moreNumbers[0]) / sizeof(moreNumbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    moreNumbers[0][0] = 1;
    moreNumbers[0][1] = 2;
    moreNumbers[0][2] = 3;
    moreNumbers[1][0] = 4;
    moreNumbers[1][1] = 5;
    moreNumbers[1][2] = 6;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", moreNumbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}