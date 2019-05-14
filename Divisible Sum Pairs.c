#include<stdio.h>
int main()
{
    int flag = 0, n , m, i, j;
    int arr[100];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
   // printf("\n\n\n");
    int check = 0;
    for(i=0; i<n; i++){
        check = arr[i];
        arr[i] = 0;
       for(j=i+1; j<n; j++){
            check = (check + arr[j]);
            if(check % m == 0){
                flag++;
                //printf("%d %d\n", flag, check);
                check = (check - arr[j]);
            }
            else{
                check = (check - arr[j]);
            }
       }
    }
   /* for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }*/
    printf("%d\n", flag);
    return 0;
}
