#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d", &n, &m);
    char ch[100];
    for(i=0; i<=n; i++)
    {
        scanf("%c", &ch[i]);
    }

    for(i=0; i<=n; i++)
    {
        printf("%c", ch[i]);
    }
    printf("\n");
    char ch1[100];
    if(ch[1]==ch[n])
    {
        ch[n] = '\0';
        /*for(i = 0; ch[i] != '\0'; ++i)
        {
            ch1[i] = ch[i];
        }*/
        strcpy(ch1,ch);
    }
   // printf("%s", ch1);

    //printf("\n");

    strcat(ch1, ch);

    printf("%s", ch1);

    //printf("\n");

}
