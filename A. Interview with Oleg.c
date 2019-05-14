#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
	char ch[128];
	for(i=0; i<=n; i++)
    {
        scanf("%c", &ch[i]);
    }

    //printf("\n");
    for(int j =0; j <= n; j++) {
		if(ch[j] == 'o' && ch[j+1] == 'g' && ch[j+2] == 'o') {
			j = j+3;
			while(ch[j] == 'g' && ch[j+1] == 'o')	j = j+2;

			printf("***");
			j--;
		} else	printf("%c", ch[j]);

    }

    printf("\n");
}
