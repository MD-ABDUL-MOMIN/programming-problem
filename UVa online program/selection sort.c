#include<stdio.h>
int main()
{
    int i,j,n,a[1000],min,k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {  min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            { k=a[min];
                a[min]=a[j];
                a[j]=k;
                min=j;
            }

        }
    }
    printf("\nThe assending order of the series are given below ");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    return 0;
}
