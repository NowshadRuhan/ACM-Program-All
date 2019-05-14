#include<stdio.h>
int main()
{
    int n, m, i, j, k, flag =0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &m);
        if(m==0){
            printf("1\n");
        }
        else{
                flag=1;
            for(j=1; j<=m; j++)
            {
                if(j%2==0){
                    flag++;
                }else{
                    flag = (flag * 2);
                }
            }
            printf("%d\n", flag);
            flag = 0;
        }
    }
    return 0;
}
