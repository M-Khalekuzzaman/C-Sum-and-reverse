#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,sum = 0;
    printf("enter number of array elements upto 100 :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Elements -  %d :",i);
        scanf("%d",&arr[i]);
    }
    printf("The array number are :");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe reverse array number are : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);

    }
    printf("\nSum = %d\n",sum);

    getch();
}
