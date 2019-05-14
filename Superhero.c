#include<stdio.h>
#include<string.h>
int main()
{
    long long int i;
    char fst[1000];
    char snd[1000];
    scanf("%s", fst);
    scanf("%s", snd);
    long long int str1, str2;
    str1 = strlen(fst);
    str2 = strlen(snd);
    if(str1 != str2)
    {
        printf("No\n");
        return 0;
    }
    else
    {
        for(i=0; i<=str1; i++)
        {
            if((fst[i] == 'a') || (fst[i] == 'e') || (fst[i] == 'i') || (fst[i] == 'o') || (fst[i] == 'u' ))
            {
                if((snd[i] != 'a') && (snd[i] != 'e') && (snd[i] != 'i') && (snd[i] != 'o') && (snd[i] != 'u' ))
                {
                    printf("No\n");
                    return 0;
                }
            }
            else if ((fst[i] != 'a') && (fst[i] != 'e') && (fst[i] != 'i') && (fst[i] != 'o') && (fst[i] != 'u' ))
            {
                if((snd[i] == 'a') || (snd[i] == 'e') || (snd[i] == 'i') || (snd[i] == 'o') || (snd[i] == 'u' ))
                {
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
    printf("Yes\n");


    return 0;
}
