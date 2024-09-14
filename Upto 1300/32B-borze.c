#include <stdio.h>
#include <string.h>

int main(void)
{
    char borze[201];

    // The solution check on CF takes up certain garbage values alongside solution, so we initialize
    // the array with '\0' to prevent this
    for (int r = 0; r < 201; r++)
    {
        borze[r] = '\0';
    }

    scanf("%s", borze);
    
    int len = strlen(borze);

    for (int i = 0; i < len; i++)
    {
        if (borze[i] == '.')
        {
            printf("0");
        }

        else if (borze[i] == '-')
        {
            if (borze[i + 1] == '.')
            {
                printf("1");
                i++;
            }

            else
            {  
                printf("2");
                i++;
            }
        }
    }
}