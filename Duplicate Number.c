#include <stdio.h>

int main()
{
    int i,num;
    scanf("%d",&num);
    int a[num],d[10000]={0};
    for(i=0;i<num;i++)
       scanf("%d",&a[i]);
    for(i=0;i<num;i++)
    {
        if(d[a[i]]==-1)
           continue;
        d[a[i]]++;
        if(d[a[i]]>1)
        {
            printf("%d\n",a[i]);
            d[a[i]]=-1;
        }
    }

    return 0;
}
