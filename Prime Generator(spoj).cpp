#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
bool prime (long long int num);
int main()
{
    long long int a,b,i,n,j;
    scanf("%lld",&n);

    for(i=0; i<n; i++)
    {
        scanf("%lld %lld",&a,&b);
        for(j=a; j<=b; j++)
        {
            if(prime(j))
                printf("%lld\n",j);

        }
    }
    return 0;
}
bool prime (long long int num)
{
    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;

        int upperLimit =sqrt(num) +1;

        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                return false;
            divisor +=2;
        }
        return prime;
    }
}


