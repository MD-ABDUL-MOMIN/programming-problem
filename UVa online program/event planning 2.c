#include<stdio.h>
int main()
{
    int w,Week[20],n,j,i;
    scanf("%d%d",&n,&w);
    for(i=0;i<w;i++)
    scanf("%d",&Week[i]);
      int max=1001;
            for(j=0;j<w;j++)
            {
                if(max>Week[j]&&Week[j]>=n)max=Week[j];
                else continue;

            }
            printf("%d",max);
            return 0;
}
