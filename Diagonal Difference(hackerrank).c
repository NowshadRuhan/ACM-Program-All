#include<stdio.h>
int main()
{
    int arr[100][100];
    int n, m1=0, m2=0, sum;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }*/

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                m1 += arr[i][j];
            }
        }
    }
    for (int i=0; i<n; i++)
    {
      for (int j=0; j<n;j++)
      {
         if ((i+j)==(n-1)){
            m2 = m2 + arr[i][j];
         }

        else
          continue;
      }
    }
    sum = (m1 - m2);
    sum = abs(sum);
    printf("%d\n", sum);
    return 0;

}
