#include<stdio.h>
int main()
{
    long long int n,m,i, flag=0;
    long long int arr[100000];
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    m = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > m)
        {
            m  = arr[i];
        }
    }
    for(i=0; i<n; i++){
        if(m == arr[i]){
            flag++;
        }
    }
    printf("%lld\n", flag);
    return 0;
}
