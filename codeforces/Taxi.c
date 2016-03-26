#include<stdio.h>
#include<conio.h>
int main()
{
    int n,M[100000],i=0,j,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&M[i]);
    for(j=1;j<n;j++)
    {key=M[j];
        i=j-1;
    while(i>=0&&M[i]>key)
        {M[i+1]=M[i];
            i=i-1;
           M[i+1]=key;
        }
    }
    int k=0;
    for(i=n-1;i>=0;i--)
    {
        if(M[i]==4)++k;
        else{
            for(j=0;j<i;j++)
            {
                sum+=M[i]+M[j];
                if(sum<4)
                    sum=sum;
                else {
                    ++k;
                    sum=0;
                }
            }
        }
    }
  }
}
