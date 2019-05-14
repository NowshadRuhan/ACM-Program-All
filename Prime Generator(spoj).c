#include<stdio.h>
int main()
{
    int n, j;
    scanf("%d", &n);
    for(j=0; j<n; j++)
    {
        unsigned long long int i, num1, num2, j;
        unsigned long long int div = 0;
        scanf("%llu %llu", &num1, &num2);
        for(i=num1; i<=num2; i++)
        {
            for(j=1; j<=i; j++)
            {
                if(i%j == 0)
                {
                    div++;
                }
            }
            if(div == 2)
            {
                printf("%llu\n", i);
            }
            div = 0;
        }
    }
    return 0;
}
