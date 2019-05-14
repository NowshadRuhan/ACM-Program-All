#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[100];
    scanf("%d", &n);
    double flag_positive=0, flag_nagetive = 0, flag_zero = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>0){
            flag_positive++;
        }else if(arr[i]<0){
            flag_nagetive++;
        }
        else{
            flag_zero++;
        }
    }
    double ps,ne,ze;
    //printf("%d %d %d", flag_positive,flag_nagetive,flag_zero);

    ps = (flag_positive/n);
    ne = (flag_nagetive/n);
    ze = (flag_zero/n);
    printf("%lf\n%lf\n%lf\n", ps, ne, ze);
    return 0;
}
