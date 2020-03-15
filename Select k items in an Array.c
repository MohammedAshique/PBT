#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[1000]={0},n=0,b[1000],i=0,temp,j;
    char ch;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&a[i]);
        scanf("%c",&ch);
        n++;
        if(ch=='\n')
            break;
    }
    scanf("%d",&temp);
    for(i=0;i<temp;i++)
        b[i]=a[i];
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        j=rand()%(i+1);
        if(j<temp)
          b[j]=a[i];
    }
    for(i=0;i<temp;i++)
        printf("%d ",b[i]);
}
