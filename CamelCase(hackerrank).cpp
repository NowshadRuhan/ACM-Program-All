#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    long long int flag = 1;
    long long int i,j;
    string ch;
    scanf("%s", ch);

    for(i=0; i<=ch.size(); i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            flag++;
        }
    }
    printf("%lld\n",flag);
    return 0;
}

