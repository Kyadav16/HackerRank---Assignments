#include <stdio.h>
#include <math.h>
void onlinebills(int b[],int x, int max,int sum)
{
    int i;
    printf(" price u entered are:\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",b[i]);
    }
     max = b[0];
    for(i=0;i<x;i++)
    {
        if(b[i]>max)
        {
            max = b[i];
        }
    }
    printf("the maximum bill is: %d\n", max);
    sum = 0;
    for(i=0;i<x;i++)
    {
        sum += b[i];
    }
    printf("the total sum of bills is: %d\n", sum);
}
int main()
{
    int n,i,max,sum;
    printf("enter the number of bills:\n");
    scanf("%d",&n);
    int bills[n];
    printf("enter the bills:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bills[i]);
    }
    onlinebills(bills,n,max,sum);
    return 0;
}


    
