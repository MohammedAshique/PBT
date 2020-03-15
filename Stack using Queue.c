#include<stdio.h>
#include<string.h>
int main()
{
    int queue[10000],stack[10000];
    int i,temp=0;
    while(1)
    {
        char ch[10];
        scanf("%s",ch);
        if(strcmp(ch,"push")==0)
        {
            if(temp>0)
            {
            for(i=0;i<t;i++)
            {
                stack[i]=queue[i];
            }
            }
            scanf("%d",&queue[0]);
            t++;
            if(temp>1)
            {
            for(i=0;i<temp-1;i++)
                queue[i+1]=stack[i];
            }
        }
        else if(strcmp(ch,"pop")==0)
        {
            temp--;
        }
        else
        {
            for(i=0;i<temp;i++)
                printf("%d ",queue[i]);
        }
    }
}
