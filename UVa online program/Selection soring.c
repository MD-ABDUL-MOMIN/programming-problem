#include<stdio.h>
int main()
{
    int n,i,j,num[10],key,R;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
          R=i;
        for(j=i+1;j<n;j++)
        {
            if(num[R]>num[j])
                R=j;
        }
        if(R!=i)
        {
            key=num[R];
            num[R]=num[i];
            num[i]=key;
        }

    }
    for(i=0;i<n;i++)printf("%d",num[i]);
    return 0;
}
