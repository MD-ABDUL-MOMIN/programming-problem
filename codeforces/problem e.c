#include<stdio.h>
#include<math.h>
int main()
{

    int n,j=1,T,N,k,l,i;
    scanf("%d",&T);

    while(j<=T)
    {
        scanf("%d",&N);
        int ch[256];
        for(i=1;i<256;i++)
            ch[i]=0;
        int p=0,temp;
        for(k=N;k>1;k--)
        {
            temp=k;

            for(l=2;l<=sqrt(temp);)
            {
                if(temp%l==0)
                    {
                        if(p<l)p=l;
                        ch[l]++;

                        temp=temp/l;
                         //printf("%d\t%d\t%d\n",l,ch[l],temp);
                        l=1;
                     }
                ++l;

            }
            if(temp!=0){
                    ch[temp]++;if(p<temp)p=temp;
           // printf("\t%d\t%d\n",temp,ch[l]);
            }


         }
         printf("Case %d: %d = ",j,N);
         for(i=2;i<=p;i++)
         {
             if(ch[i]>0)
             {
                if(i!=p)
                    printf("%d (%d) * ",i,ch[i]);
                else printf("%d (%d)\n",i,ch[i]);
             }
         }

    j++;
}

return 0;
}
