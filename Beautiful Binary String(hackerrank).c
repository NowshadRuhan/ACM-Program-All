#include<stdio.h>
int main()
{
    int n, m ,k , i, flag=0;
    char number[100];
    scanf("%d", &n);
    scanf("%s", number);
    for( i = 0; i < n;)
    {
        if(number[i] == '0' && number[i+1] == '1' && number[i+2] == '0'){
            flag++;
            i+=3;
        }
        else {
            i++;
        }
    }
    printf("%d\n", flag);

}
