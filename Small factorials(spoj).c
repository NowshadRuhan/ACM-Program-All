#include<stdio.h>
int main()
{
    int n, m, k=1, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &m);
        for (j = m; j >=1 ; j--)
        {
            k = (k * j);
        }
        printf("%d\n", k);
        k=1;
    }
    return 0;
}
