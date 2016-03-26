#include<stdio.h>
int main()
{
    int i,j=0,N,P,Q,H[104],max=0,min=101,key,k=0,L;
    scanf("%d",&N);
    L=N-1;
    for(i=0;i<N;i++)
    {
        scanf("%d",&H[i]);
        if(max<H[i]){max=H[i];P=i;}
        if(min>=H[i]){min=H[i];Q=i;}
    }
    while(1)
    {
          if(P==0&&Q==L)break;
          if(P!=0)
        {key=H[P];
        H[P]=H[P-1];
        H[P-1]=key;
        P=P-1;
        ++k;}

        if(Q!=P&&P!=Q-1)
        {
            key=H[Q+1];
            H[Q+1]=H[Q];
            H[Q]=key;
            ++k;
            Q=Q+1;
        }
    }



    printf("%d",k);

    return 0;}
