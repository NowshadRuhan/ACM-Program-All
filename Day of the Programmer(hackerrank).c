#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year == 1918)
    {
            printf("26.09.1918\n");
    }
    else
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year < 1918 && year % 4 == 0) || (year % 400 == 0))
        {
            printf("12.09.%d\n",year);
        }
        else
        {
            printf("13.09.%d\n",year);
        }
    }
    return 0;
}
