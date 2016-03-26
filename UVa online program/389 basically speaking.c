#include<stdio.h>
#include<string.h>
int main()
{
    char num[100000];
    int base,c_base;
    unsigned long int l;
    while(scanf("%s%d%d",num,&base,&c_base)==3)
    {
        l=strlen(num);
        long long int sum=0,p=0,temp;
        int num1[100000],k,i;
        double S=1;
        for(i=l-1;i>=0;i--)
        {
            if(num[i]>='A'&&num[i]<='F')
            num1[i]=num[i]-'A'+10;
            else num1[i]=num[i]-'0';
           for(k=0;k<p;k++)
                 S=S*base;
            sum+=(num1[i]*S);
            S=1;
            p++;

        }
        int rem,j=0;
        k=0;
        p=7;
        char num3[10],num2[10];
        temp=sum;

        while(sum>0&&j<=p)
        {
            rem=sum%c_base;
            if(rem>=10)
            num2[j]=rem+'A'-10;
            else num2[j]=rem+'0';
            sum=sum/c_base;
            ++j;

        }
        if(temp==0)printf("%7s\n","0");
        else {j=j-1;
         if(j<p)
            {
                for(i=6-j;i>=1;i--)printf("%c",' ');
                for(i=j;i>=0;i--)printf("%c",num2[i]);
                printf("\n");
        }
        else
        printf("%7s\n","ERROR");

    }
    }
    return 0;
}


