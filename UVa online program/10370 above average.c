#include<stdio.h>
int main()
{
    int i,j,n,N,c;
    float aver,f=0;
    long int sum;
    scanf("%d",&N);
    while(N>=1)
    {
        {scanf("\n%d",&n);
        int a[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
         sum+=a[i];}
            aver=sum/(n*1.00);
            c=0;
        for(j=0;j<n;j++)
            if(a[j]>aver)
                c++;
                else continue;
        printf("%2.3f%c\n",((c*1.00)/n*100),'%');
        }
        N--;

    }
    return 0;
}
