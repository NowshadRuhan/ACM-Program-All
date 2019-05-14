#include<stdio.h>
int main()
{
    int x,y,z;
    int a,b,c;
    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &a, &b, &c);
    if(((x<a)&&(b>y))||((c>z)&&(x<a)) ||((b>y)&&(c>z)))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
