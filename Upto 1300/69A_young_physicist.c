#include <stdio.h>

int main(void)
{
    int n, i, j, k, sum_i = 0, sum_j = 0, sum_k = 0;
    scanf("%d", &n);

    while (n > 0)
    {
        scanf("%d %d %d", &i, &j, &k);

        sum_i += i;
        sum_j += j;
        sum_k += k;

        n--;
    }

    if ((sum_i == sum_j) && (sum_i == sum_k) && (sum_i == 0))
    {
        printf("YES\n");
        return 0;
    }
    
    printf("NO\n");
    return 0;
}