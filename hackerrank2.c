#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    long long int n;
    scanf("%lld", &n);
    long long int arr[10000];
    long long int m=0;
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        m += arr[i];
    }
    printf("%lld\n", m);
    return 0;
}


