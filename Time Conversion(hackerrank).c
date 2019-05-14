#include<stdio.h>
int main()
{
    char ch[100] ;
    scanf("%s", ch);
    int h1 = (int)ch[1] - '0';
    int h2 = (int)ch[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

    if (ch[8] == 'A')
    {
        if (hh == 12)
        {
            printf("00");
            for (int i=2; i <= 7; i++)
            {
                printf("%c", ch[i]);
            }
        }
        else
        {
            for (int i=0; i <= 7; i++)
            {
                printf("%c", ch[i]);
            }
        }
    }
    else
    {
        if (hh == 12)
        {
            printf("12");
            for (int i=2; i <= 7; i++)
            {
                printf("%c", ch[i]);
            }
        }
        else
        {
            hh = hh + 12;
            printf("%d", hh);
            for (int i=2; i <= 7; i++)
            {
                printf("%c", ch[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
