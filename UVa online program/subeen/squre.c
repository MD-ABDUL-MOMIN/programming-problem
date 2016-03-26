#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int num,i,j;
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            for(j=0;j<num;j++)
                printf("%c",'*');
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
