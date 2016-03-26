/*problem solution from examination 2011
//problem:3(d) convert a given number of days into months and days
#include<stdio.h>
int main()
{
    int days,month;
    printf("Please enter the days = ");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("\nmonths %d \nand days %d",month,days);
    return 0;
}

//Problem:write a program to print a sequence of squre of numbers using shorthand operator
#include<stdio.h>
int main()
{
    int i,n;
    long long int j=1;
    printf("Enter a number the squre number to be shown\n");
    scanf("%d",&n);
    printf("The sequence of squre number is given below\n");
    for(i=1;i<=n;i++)
    { j=i;
        j*=j;
    printf("%5lld",j);
    }
    return 0;
}

//problem:3(e)write a program to read four values a,b,c and d;To solve (a+b)/(c-d) if c-d not equal zero
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the value of a,b,c and d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a+b;
    f=c-d;
    if(f!=0)printf("The ratio of (a+b) and (c-d) is %f",(float)e/f);
    else printf("We can't evaluate the ratio");
    return 0;

}
*/
//problem:(****5(d))write a program to solve the quardratic equation
