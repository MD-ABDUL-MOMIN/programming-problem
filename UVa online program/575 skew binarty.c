#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char num[100];
    int i,j,l;
    while(1)
    {gets(num);
        l=strlen(num);
        if(l==1&&num[0]=='0')break;
        else{
    unsigned long int sum=0;
        for(i=0;i<l;i++)
        {
            j=num[i]-'0';
            sum=sum+j*(pow(2,l-i)-1);
        }
        printf("%u\n",sum);
    }
    }
    return 0;
}
