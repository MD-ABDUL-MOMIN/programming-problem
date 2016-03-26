#include<stdio.h>
#include<string.h>
int main()
{
    int T,t=1;
    scanf("%d",&T);
    while(t<=T)
    {
        char ch1[210],ch2[210],ch3[210],ch4[210],sum[304];
    scanf("%s%s",ch1,ch2);
    int l1,l2,a,b,i,M,N;
     l1=strlen(ch1);
     l2=strlen(ch2);
      M=l1-1;
      N=l2-1;
    for(i=0;i<l1;i++)
    {
        ch3[i]=ch1[M];
        --M;
    }
    for(i=0;i<l2;i++)
    {
        ch4[i]=ch2[N];
        --N;
    }
    l1=l1-1;
    l2=l2-1;
    int j=0,n,m,S,p=0,k=0,rem=0;
    while(l1>=0||l2>=0)
        {
         i=l1;
          j=l2;
        if(i<0){i=0;ch3[i]='0';}
        else if(j<0){j=0;ch4[j]='0';}
        n=ch3[i]-'0';
        m=ch4[j]-'0';
        S=n+m+p;
        rem=S%10;
        sum[k++]=rem+'0';
        p=S/10;
        l1--;
        l2--;
        }
        if(p>0)sum[k++]=p+'0';
       int l=1;
       for(j=0;j<k;j++)
       {
           if(l!=0&&sum[j]=='0')
            continue;
           else {
            printf("%c",sum[j]);
            l=0;}
       }
        printf("\n");
        t++;
        k=0;
        p=0;
        }
        return 0;
}

