#include<stdio.h>
int main()
{
    unsigned long long arr[100], i ,n, sum1 = 0, sum2=0, sum3=0, sum4=0, sum5=0;
    for(i=0; i<5; i++)
    {
        scanf("%llu", &arr[i]);
    }
    sum1 += arr[1] + arr[2] + arr[3] + arr[4];
    sum2 += arr[0] + arr[2] + arr[3] + arr[4];
    sum3 += arr[0] + arr[1] + arr[3] + arr[4];
    sum4 += arr[0] + arr[1] + arr[2] + arr[4];
    sum5 += arr[0] + arr[1] + arr[2] + arr[3];

    if((sum1<sum2) && (sum1<sum3)  && (sum1<sum4) && (sum1<sum5))
    {
        printf("%llu ", sum1);
    }
    else if((sum2<sum1) && (sum2<sum3)  && (sum2<sum4) && (sum2<sum5))
    {
        printf("%llu ", sum2);
    }
    else if((sum3<sum2) && (sum3<sum1)  && (sum3<sum4) && (sum3<sum5))
    {
        printf("%llu ", sum3);
    }
    else if((sum4<sum2) && (sum4<sum3)  && (sum4<sum1) && (sum4<sum5))
    {
        printf("%llu ", sum4);
    }
    else
    {
        printf("%llu ", sum5);
    }



    if((sum1>sum2) && (sum1>sum3)  && (sum1>sum4) && (sum1>sum5))
    {
        printf("%llu\n", sum1);
    }
    else if((sum2>sum1) && (sum2>sum3)  && (sum2>sum4) && (sum2>sum5))
    {
        printf("%llu\n", sum2);
    }
    else if((sum3>sum2) && (sum3>sum1)  && (sum3>sum4) && (sum3>sum5))
    {
        printf("%llu\n", sum3);
    }
    else if((sum4>sum2) && (sum4>sum3)  && (sum4>sum1) && (sum4>sum5))
    {
        printf("%llu\n", sum4);
    }
    else
    {
        printf("%llu\n", sum5);
    }

    return 0;
}
