#include<stdio.h>
#include<string.h>
int main()
{
    char ch[255],ch1[255];
    long long int i,j,l,L;
    while(scanf("%s%s",&ch,&ch1)==2)
    {int D[10000]={0},k=0;
     char Multiplication[1000000];

        strrev(ch);
        strrev(ch1);
        l=0;
        int p=0,M=0,F=0,B=0;
        for(i=0;ch1[i];i++)
        {l=0;p=0;
            for(j=0;ch[j];j++)
            {
                k=(ch1[i]-'0')*(ch[j]-'0')+p;
                D[l+i]+=(k%10)+M;

                F=D[l+i]%10;
                M=D[l+i]/10;
                    p=k/10;
                    l++;
            }
                if(p!=0||M!=0)
               {
                  D[l]+=p+M;

                }


        }
        //printf("%d",l);
        for(i=l;i>=0;i--){
                if(D[i]==0&&i==l)continue;
        else
            printf("%d",D[i]);
        }
    //strrev(Multiplication);
    //puts(Multiplication);

    printf("\n");
    }
return 0;
}
