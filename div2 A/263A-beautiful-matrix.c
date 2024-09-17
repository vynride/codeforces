#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Matrix of order 5x5 (row x columns)
    int matrix[5][5];

    // Keep track of 1's location
    int one_i, one_j;

    // Read data into matrix
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], 
                                &matrix[i][2], &matrix[i][3], &matrix[i][4]);  

        // Save location of 1 when it is found

        if (matrix[i][0] == 1)
        {
            one_i = i;
            one_j = 0;
        }

        else if (matrix[i][1] == 1)
        {
            one_i = i;
            one_j = 1;
        }

        else if (matrix[i][2] == 1)
        {
            one_i = i;
            one_j = 2;  
        }

        else if (matrix[i][3] == 1)
        {
            one_i = i;
            one_j = 3;

        }

        // We cannot directly utilize else condition here as it's possible the 1 is not in the present row at all
        else if (matrix[i][4] == 1)
        {
            one_i = i;
            one_j = 4;
        }
    }

    // Required moves to get 1 to centre row/column are |2 - index|
    int row_t, column_t;
    row_t = abs(2 - one_i);
    column_t = abs(2 - one_j);

    printf("%d\n", row_t + column_t);
}
