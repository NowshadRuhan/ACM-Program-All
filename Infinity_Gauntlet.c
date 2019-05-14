#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag1=0, flag2=0,flag3=0,flag4=0,flag5=0,flag6=0;
    int m = 6;
    m = (m-n);
    while(n--)
    {
        char ch[100];
        scanf("%s", ch);
        //printf("%d\n", n);
        if(strcmp(ch,"purple") == 0)
        {
            flag1 = 1;
            //printf("sdfs\n");
        }
        //printf("sdfs\n");
        else if(strcmp(ch,"green") == 0 )
        {
            flag2 = 1;
        }
        else if(strcmp(ch,"blue") == 0 )
        {
            flag3 = 1;
        }
        else if(strcmp(ch,"orange") == 0 )
        {
            flag4 = 1;
        }
        else if(strcmp(ch,"red") == 0 )
        {
            flag5 = 1;
        }
        else if(strcmp(ch,"yellow") == 0)
        {
            flag6 = 1;
        }
    }
    printf("%d\n", m);
    if(m==6)
    {
        printf("Time\nMind\nSoul\nPower\nReality\nSpace\n");
    }
    else
    {
        if(flag1==0)
        {
            printf("Power\n");
        }
        if(flag2==0)
        {
            printf("Time\n");
        }
        if(flag3==0)
        {
            printf("Space\n");
        }
        if(flag4==0)
        {
            printf("Soul\n");
        }
        if(flag5==0)
        {
            printf("Reality\n");
        }
        if(flag6==0)
        {
            printf("Mind\n");
        }
    }
    return 0;
}
