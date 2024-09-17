#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char word[101];
        scanf("%s", word);

        int count = 0;

        while (word[count] != '\0')
        {
            count++;
        }

        if (count > 10)
            printf("%c%d%c\n", word[0], count - 2, word[count - 1]);

        else 
            printf("%s\n", word);
    }

    return 0;
}