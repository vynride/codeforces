#include <stdio.h>

int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);

    char sequence[n];
    scanf("%s", sequence);

    while(t > 0)
    {
        int index = 0;

        while (index <= n - 2)
        {
            // Current position has B
            if (sequence[index] == 'B')
            {
                // Next position is G we move two positions to skip open current B in index position 
                // that will be in index + 1 after 1 sec 
                if (sequence[index + 1] == 'G')
                {
                    sequence[index] = 'G';
                    sequence[index + 1] = 'B';
                    
                    index += 2;
                }

                // Next position has B as well se we move ahead
                else
                {
                    index++;
                }
            }
            
            // Current position has G
            else if (sequence[index] == 'G')
            {
                index++;
            }

        }

        t--;
    }

    // Print final sequence
    for (int i = 0; i < n; i++)
    {
        printf("%c", sequence[i]);
    }
        
    printf("\n");
}