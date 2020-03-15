#include <stdio.h>

int main()
{
    int a[100],b[100],num,i,j;
    printf("Enter the limit:");
    scanf("%d",&num);
    printf("Enter the array elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        j=num-i-1;
        b[j]=a[i];
    }
    printf("The reversed array elements are:");
    for(i=0;i<num;i++)
    {
        printf(" %d",b[i]);
    }
    return 0;
}
