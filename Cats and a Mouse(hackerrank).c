#include<stdio.h>
#include<math.h>
int main()
{
    int cat_a, cat_b, mouse_c, n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d %d", &cat_a, &cat_b, &mouse_c);

        int sum1= 0, sum2 = 0;
        sum1 = (mouse_c - cat_a);
        sum2 = (mouse_c - cat_b);

        sum1 = abs(sum1);
        sum2 = abs(sum2);
        if(sum1<sum2){
            printf("Cat A\n");
        }
        else if(sum1>sum2){
            printf("Cat B\n");
        }
        else{
            printf("Mouse C\n");
        }
        sum1 = 0;
        sum2 = 0;
        cat_a = 0;
        cat_b = 0;
        mouse_c = 0;
    }
    return 0;
}
