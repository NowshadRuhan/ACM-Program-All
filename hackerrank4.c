#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

    for(int i=0; s[i]; i++)
    {
        if(s[i]!=' ')
        {
            printf("%c", s[i]);

        }else if(s[i]==' '){
            printf("\n");
        }
    }
    return 0;
}

