#include<stdio.h>
int beautiful(int N);
int main()
{
    int N,i;
    scanf("%d",&N);
    while(++N)
    {
       i=beautiful(N);
       if(i==1)break;
    }
    printf("%d",N);
    return 0;
}
int beautiful(int N)
{
    int rem,a[5],i=0,k,key,j;
    while(N>0)
    {
        rem=N%10;
        a[i]=rem;
        N=N/10;
        i++;
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j]){key=0;return key;}
            else key=1;
        }
    }
    if(key==1)return key;
}
