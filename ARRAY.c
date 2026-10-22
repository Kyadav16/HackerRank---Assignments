
#include <stdio.h>
#include <math.h>
void traverse (int m[],int x)
{
    int i;
    printf("marks u entered are:\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",m[i]);
    }

}
int main()
{
    int n,i;
    printf("enter the number of students:\n");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    traverse(marks,n);
    return 0;
}


    
