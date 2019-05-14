#include<stdio.h>
int main()
{
    int arr1[100], arr2[100];
    for(int i =0; i<=2; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i =0; i<=2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int flag1=0, flag2=0;
    for(int i =0; i<=2; i++)
    {
        if(arr1[i]>arr2[i])
        {
            flag1++;
        }else if(arr1[i]<arr2[i])
        {
            flag2++;
        }
        else{

        }
    }
    printf("%d %d\n",flag1,flag2);
    return 0;
}
