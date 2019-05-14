#include<stdio.h>
#include<string.h>
int main()
{
    int flag = 1;
    int i,j;
    char ch[100000];
    scanf("%s", ch);
    int n= strlen(ch);
    for(i=0; i<=n; i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            flag++;
        }
    }
    printf("%d\n",flag);
    return 0;
}
