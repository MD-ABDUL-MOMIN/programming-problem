#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[10],i=0,l,sum=0,d,j;
    char number[100];
    printf("Enter a number ");
    gets(number);

    l=strlen(number);j=0;
    for(i=l-1;i>=0;i--)
    {
        if(number[i]>='1'&&number[i]<='9'){d=number[i]-48;sum+=d*pow(16,j);}
        else if(number[i]>='A'&&number[i]<='F'){d=(number[i]-64+9);
        sum+=d*pow(16,j);}
        j++;
    }
    printf("the solution of two number is %d",sum);
    return 0;
}
