#include<stdio.h>
int main()
{
    int n, m, i;
    int arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>=38){
            if((arr[i]==38) || (arr[i]==39)){
                arr[i] = 40;
            }
            else if((arr[i]==43) || (arr[i]==44) )
            {
                arr[i] = 45;
            }//////
            else if((arr[i]==48) || (arr[i]==49) )
            {
                arr[i] = 50;
            }
            else if((arr[i]==53) || (arr[i]==54) )
            {
                arr[i] = 55;
            }
            else if((arr[i]==58) || (arr[i]==59) )
            {
                arr[i] = 60;
            }
            else if((arr[i]==63) || (arr[i]==64) )
            {
                arr[i] = 65;
            }
            else if((arr[i]==68) || (arr[i]==69) )
            {
                arr[i] = 70;
            }
            else if((arr[i]==73) || (arr[i]==74) )
            {
                arr[i] = 75;
            }
            else if((arr[i]==78) || (arr[i]==79) )
            {
                arr[i] = 80;
            }
            else if((arr[i]==83) || (arr[i]==84) )
            {
                arr[i] = 85;
            }
            else if((arr[i]==88) || (arr[i]==89) )
            {
                arr[i] = 90;
            }
            else if((arr[i]==93) || (arr[i]==94) )
            {
                arr[i] = 95;
            }
            else if((arr[i]==98) || (arr[i]==99) )
            {
                arr[i] = 100;
            }
            else{

            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
