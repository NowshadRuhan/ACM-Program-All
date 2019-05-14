#include<stdio.h>
int main()
{
    long long int n, i, m=0;
    long long int arr1[100000];
    scanf("%lld", &n);
    for(i=0; i<n; i++){
        scanf("%lld", &arr1[i]);
        m += arr1[i];
    }
    printf("%lld\n", m);
    return 0;
}
