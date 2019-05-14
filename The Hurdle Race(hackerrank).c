#include<stdio.h>
int main()
{
    int flag = 0, i , k=0, n , m, hight[100];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &hight[i]);
       // k = hight[0];
        if(k < hight[i]){
            k = hight[i];
        }
    }
    //printf("%d", k);

    if(k > m){
        flag = (k-m);
        printf("%d\n", flag);
    }
    else{
        printf("0\n");
    }
    return 0;
}
