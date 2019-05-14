#include<stdio.h>
int main()
{
    int n,a=0;
    char str[1000];
    scanf("%d", &n);
    int i,D=0,A=0;
    for(i=0; i<n; i++){
        if(str[i]=='A'){
            a+=1;
        }
        else if(str[i]=='D'){
            D+=1;
        }
    }
    if(A>D)
        printf("Anton\n");

    else if(D>A)
        printf("Danik\n");

    else if(D==A){
        printf("Friendship\n");
    }
    return 0;

}
