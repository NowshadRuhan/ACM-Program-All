#include<stdio.h>
int main()
{
    unsigned long long int i, j, n, m, k;
    unsigned long long int arr[100000];
    scanf("%llu", &n);
    scanf("%llu", &k);
    unsigned long long int change;
    unsigned long long int sum = 0;
    for(i=0; i<n; i++)
    {
        scanf("%llu", &arr[i]);
    }
    scanf("%llu", &change);

    arr[k] = 0;

   /* for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    */
    for(j=0; j<n; j++)
    {
        sum += arr[j];
    }
    //printf("%d\n", sum);

    sum = (sum/2);
    if(sum == change)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        change = (change-sum);
        printf("%llu\n", change);
    }

    return 0;
}
