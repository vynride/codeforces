#include <stdio.h>

int main(void)
{
    int w;
    scanf("%d", &w);

    // 2 is the only even number that cannot be split into two even numbers (not necessarily equal) 
    // E.g. 50 can be split as 24 and 26
    if (w > 2)
    {
        if (w % 2 == 0)
            printf("YES\n");

        else
            printf("NO\n");

        return 0;
    }

    printf("NO\n");
    return 0;
}